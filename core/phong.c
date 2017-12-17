/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phong.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 22:33:10 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/21 22:33:11 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/core.h"

static const t_double3	g_am = (t_double3){1., 1., 1.};
static const t_double3	g_const2 = (t_double3){2.0, 2.0, 2.0};
static const double 	g_ph_spec = 90.0;

inline t_double3	ambient(int i)
{
	return ((t_double3)g_obj[i].prop.ambient * g_am);
}

inline t_double3	diffuse(t_hit_point p, int i)
{
	t_double3	normal;
	t_double3	light;
	t_double3	nl;

	normal = g_obj[p.i].normal(p.int_point, &g_obj[p.i]);
	light = norm(g_light[i].lcs.o - p.int_point);
	nl = vabsmod(dot3(normal, light));
	return (vabsmod(nl * g_obj[p.i].prop.diffuse));
}

inline t_double3	specular(t_hit_point p, int i)
{
	t_double3	normal;
	t_double3	light;
	t_double3	reflect;
	t_double3	view;
	double 		spec;

	normal = g_obj[p.i].normal(p.int_point, &g_obj[p.i]);
	light = norm(g_light[i].lcs.o - p.int_point);
	reflect = light - g_const2 * vabs(dot3(normal, light)) * normal;
	view = norm(g_eye.lcs.o - g_obj[p.i].lcs.o);
	spec = pow(fabs(dot(reflect, view)), g_ph_spec);
	return (g_obj[p.i].prop.specular * ((t_double3){spec, spec, spec}));
}
