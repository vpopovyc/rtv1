/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 14:57:41 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/12 14:57:42 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/core.h"

t_ray	get_ray(register const uint32_t x_, register const uint32_t y_)
{
	double		sx;
	double		sy;
	t_double3	impl_p;
	t_double3	x;
	t_double3	y;

	sx = ((double)x_ / (ww - 1)) * 2.0 - 1.0;
	sy = ((double)y_ / (wh - 1)) * 2.0 - 1.0;
	x = (t_double3){sx * tan(FOV), sx * tan(FOV), sx *tan(FOV)};
	y = (t_double3){sy * tan(FOV), sy * tan(FOV), sy * tan(FOV)};
	impl_p = g_eye.lcs.o + g_eye.lcs.u + x * g_eye.lcs.v + y * g_eye.lcs.n;
	return (norm(impl_p - g_eye.lcs.o));
}

void	set_prime_rays(void)
{
	register uint16_t	x;
	register uint16_t	y;

	y = 0;
	while (y < wh)
	{
		x = 0;
		while (x < ww)
		{
			g_rays[y * wh + x] = get_ray(x, y);
			++x;
		}
		++y;
	}
}

void	set_eye(t_double3 origin, t_double3 dir, t_double3 up)
{
	t_cs	ecs;

	ecs.o = origin;
	ecs.u = norm(dir - origin);
	ecs.v = norm(cross(up, ecs.u));
	ecs.n = norm(cross(ecs.u, ecs.v));
	g_eye.lcs = ecs;
	vec_print("Eye:\n\to:", g_eye.lcs.o);
	vec_print("\tu:", g_eye.lcs.u);
	vec_print("\tv:", g_eye.lcs.v);
	vec_print("\tn:", g_eye.lcs.n);
	set_prime_rays();
}

void	setup(void)
{
	init_sdl("rtv1");
	set_eye((t_double3){0.0, 0.0, 2000.0}, (t_double3){0.0, 0.0, 1.0}, (t_double3){0.0, 1.0, 0.0});
}
