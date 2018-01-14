/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trace.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 14:21:17 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/12/03 14:21:18 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/core.h"

static const t_double3	zero_vec = (t_double3){0.0, 0.0, 0.0};
static __thread t_double3 diff_part[LNUM];
static __thread t_double3 spec_part[LNUM];

t_hit_point	closest_intersection(t_ray ray, t_double3 ray_o)
{
	int		i;
	int		was_hit;
	int		obj_idx;
	double	t;
	double	t_min;

	i = 0;
	t = -1.0;
	t_min = -1.0;
	obj_idx = -1;
	was_hit = 0;
#pragma clang loop vectorize(enable) unroll(full) distribute(enable)
	while (i < OBJNUM)
	{
		t = g_obj[i].intersect_me(ray, ray_o, &g_obj[i]);
		if ((t < t_min || t_min == -1.0) && t != -1.0)
		{
			t_min = t;
			obj_idx = i;
			was_hit = 1;
		}
		++i;
	}
	return ((t_hit_point){was_hit, obj_idx, point(ray_o, ray, t_min)});
}

_Bool	point_is_illuminated(t_ray light, t_double3 light_o)
{
	t_ray		norm_light;
	t_hit_point	hp;

	norm_light = norm(light);
	hp = closest_intersection(norm_light, light_o);
	if (hp.was_hit)
	{
		if (len(hp.int_point - light_o) > len(light)) // if obstacle is further than light point
			return(1);
		return (0);
	}
	return (1);
}

t_double3	point_illum(void)
{
	t_double3 diff;
	t_double3 spec;
	int i;

	i = 0;
	diff = zero_vec;
	spec = zero_vec;
	while (i < LNUM)
	{
		diff += (diff_part[i] * diff_part[i]);
		spec += (spec_part[i] * spec_part[i]);
		diff_part[i] = zero_vec;
		spec_part[i] = zero_vec;
		++i;
	}
	diff = (t_double3){pow(diff[0], 1.0 / LNUM), pow(diff[1], 1.0 / LNUM), pow(diff[2], 1.0 / LNUM)};
	spec = (t_double3){pow(spec[0], 1.0 / LNUM), pow(spec[1], 1.0 / LNUM), pow(spec[2], 1.0 / LNUM)};
	return (vabsmod(spec + diff));
}

int		color_local(t_hit_point p)
{
	int			i;
	t_color		color;

	i = 0;
#pragma clang loop vectorize(enable) unroll(full) distribute(enable)
	while (i < LNUM)
	{
		if (point_is_illuminated(g_light[i].lcs.o - p.int_point, p.int_point))
		{
			diff_part[i] = diffuse(p, i);
			spec_part[i] = specular(p, i);
		}
		++i;
	}
	color.unit.rgb = (point_illum() + ambient(p.i)) * g_obj[p.i].prop.color.unit.rgb; // Get final color
	update_raw(&color);
	color.a = 0;
	return(color.rgba);
}

int 	trace(t_ray ray, t_double3 ray_o)
{
	t_hit_point	p;

	p = closest_intersection(ray, ray_o);

	if (p.was_hit)
	{
		return (color_local(p));
	}
	else
	{
		return (bg_color);
	}
}
