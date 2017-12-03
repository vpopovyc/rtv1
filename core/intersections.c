/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersections.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 19:03:57 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/19 19:03:58 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/core.h"

static inline double	sphere_inter_solution(double t1, double t2)
{
	if (t1 > 0.0001)
		return (t1);
	if (t2 > 0.0001)
		return (t2);
	return (-1.0);
}

double					sphere_inter(t_ray ray, t_double3 ray_o, t_object *sphere)
{
	double		a;
	double		b;
	double		c;
	t_double2	d;
	t_ray		sray;

	sray = ray_o - sphere->lcs.o;
	a = dot(ray, ray);
	b = 2.0 * dot(ray, sray);
	c = dot(sray, sray) - (sphere->prop.radius * sphere->prop.radius);
	d[0] = b * b - 4.0 * a * c;
	if (d[0] < 0.0)
		return (-1.0);
	else
	{
		d[1] = sqrt(d[0]);
		return (sphere_inter_solution((-b + d[1]) / 2.0 * a, (-b - d[1]) / 2.0 * a));
	}
}
