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

static double		quadratic(double a, double b, double c)
{
	double	sqd;
	double	d;
	double 	t1;
	double 	t2;

	sqd = (b * b) - (4.0 * a * c);
	if (sqd < PRESC_ERR)
		return (-1.0);
	d = sqrt(sqd);
	t1 = (-b + d) / (2.0 * a);
	t2 = (-b - d) / (2.0 * a);
	if (t1 > PRESC_ERR && t1 <= t2)
		return (t1);
	else if (t2 > PRESC_ERR)
		return (t2);
	else
		return (-1.0);
}

double				sphere_inter(t_ray ray, t_double3 ray_o, t_object *sphere)
{
	t_ray		dist;

	dist = ray_o - sphere->lcs.o;
	return (quadratic(
				dot(ray, ray),
				2.0 * dot(ray, dist),
				dot(dist, dist) - (sphere->prop.radius * sphere->prop.radius)
				)
			);
}

double				cylinder_inter(t_ray ray, t_double3 ray_o, t_object *cylin)
{
	t_double3	sqa;
	t_double3	pr;
	t_ray		dist;

	dist = ray_o - cylin->lcs.o;
	sqa = ray - (dot3(ray, cylin->lcs.v) * cylin->lcs.v);
	pr = dist - (dot3(dist, cylin->lcs.v) * cylin->lcs.v);	
	return (quadratic(
				dot(sqa, sqa),
				2.0 * dot(sqa, pr),
				dot(pr, pr) - (cylin->prop.radius * cylin->prop.radius)
				)
			);
}

double				plane_inter(t_ray ray, t_double3 ray_o, t_object *plane)
{
	double 	t;
	double	denominator;

	t = -1.0;
	denominator = dot(plane->lcs.n, ray);
	if (denominator > PRESC_ERR)
	{
		t = dot(plane->lcs.o - ray_o, plane->lcs.n) / denominator;
		if (t > PRESC_ERR)
			return (t);
	}
	return (-1.0);
}

