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

static __thread double	g_cos;
static __thread double	g_sin;

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

double				cone_inter(t_ray ray, t_double3 ray_o, t_object *cone)
{
	t_ray	dist;
	t_ray	sqa;
	t_ray	pr;
	double 	side1;
	double	side2;

	dist = ray_o - cone->lcs.o;
	side1 = dot(ray, cone->lcs.v);
	side2 = dot(dist, cone->lcs.v);
	sqa = ray - scale(cone->lcs.v, side1);
	pr = dist - scale(cone->lcs.v, side2);
	g_cos = cos(cone->prop.a_theta);
	g_sin = sin(cone->prop.a_theta);
	g_cos *= g_cos;
	g_sin *= g_sin;
	return (quadratic(
				g_cos * dot(sqa, sqa) - g_sin * (side1 * side1),
				2.0 * g_cos * dot(sqa, pr) - 2.0 * g_sin * (side1 * side2),
				g_cos * dot(pr, pr) - g_sin * (side2 * side2)
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

