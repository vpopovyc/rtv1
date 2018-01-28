/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 15:21:05 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/12 15:21:06 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/utils.h"

/*
** Point from origin and direction ray
*/

inline t_double3	point(t_double3 p, t_ray v, double t)
{
	v = (t_double3){(v[0] * t), (v[1] * t), (v[2] * t)};
	return (p + v);
}

/*
** Implicit conv between t_double4 and t_double3
*/

inline	t_double3	vec(t_double4 x)
{
	return ((t_double3){x[0], x[1], x[2]});
}

inline	t_double3	vec3(double x)
{
	return ((t_double3){x, x, x});
}

inline	double		len(t_double3 p)
{
	p *= p;
	return (sqrt(p[0] + p[1] + p[2]));
}

inline	double		theta(t_double3 a, t_double3 b)
{
	t_double3	len_a;
	t_double3	len_b;
	double		dot_ab;

	len_a = vec3(len(a));
	len_b = vec3(len(b));
	dot_ab = dot(a, b);
	return (dot_ab / (len_a[0] * len_b[0]));
}
