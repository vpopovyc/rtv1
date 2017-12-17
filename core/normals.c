/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 17:22:52 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/26 17:22:55 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/core.h"

t_ray	sphere_normal(t_double3 point, t_object *sphere)
{
	return (norm(point - sphere->lcs.o));
}

t_ray	cylinder_normal(t_double3 point, t_object *cylinder)
{
	t_double3 r;
	t_double3 dist;

	r = vec3(cylinder->prop.radius);
	dist = norm(cylinder->lcs.o - point);
	return (norm(((dot3(dist, cylinder->lcs.v) * cylinder->lcs.v) - dist) / r));
}

t_ray	cone_normal(t_double3 point, t_object *cone)
{
	t_double3	dist;
	t_double3	theta3;

	dist = point - cone->lcs.o;
	theta3 = vec3(theta(dist, cone->lcs.v));
	return (norm(cross(cross(dist, (norm(theta3 * cone->lcs.v)) - dist), dist)));
}

t_ray	plane_normal(t_double3 point, t_object *plane)
{
	(void)point;
	return (-plane->lcs.n);
}