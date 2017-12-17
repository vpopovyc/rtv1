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

inline	t_double3	vec3(double _x)
{
	return ((t_double3){_x, _x, _x});
}

inline	double		len(t_double3 p)
{
	p *= p;
	return (sqrt(p[0] + p[1] + p[2]));
}

/*
** Cross Product
** (ax, ay, az) x (bx, by, bz)
** cx = (ay * bz - az * by)
** cy = (az * bx - ax * bz)
** cz = (ax * by - ay * bx)
*/

inline	t_double3	cross(t_double3 a, t_double3 b)
{
	return ((t_double3){ a[1] * b[2] - a[2] * b[1],
						 a[2] * b[0] - a[0] * b[2],
						 a[0] * b[1] - a[1] * b[0]});
}

/*
** Abs for t_double3 (vector of 3 'double' values)
*/

inline	t_double3	vabs(t_double3 x)
{
	x[0] = x[0] < 0.0 ? 0.0 : x[0];
	x[1] = x[1] < 0.0 ? 0.0 : x[1];
	x[2] = x[2] < 0.0 ? 0.0 : x[2];
	return (x);
}

inline	t_double3	vabsmod(t_double3 x)
{
	x[0] = x[0] < 0.0 ? 0.0 : x[0];
	x[1] = x[1] < 0.0 ? 0.0 : x[1];
	x[2] = x[2] < 0.0 ? 0.0 : x[2];
	x[0] = x[0] > 1.0 ? 1.0 : x[0];
	x[1] = x[1] > 1.0 ? 1.0 : x[1];
	x[2] = x[2] > 1.0 ? 1.0 : x[2];
	return (x);
}

/*
** Normalization of vector
*/

inline	t_double3	norm(t_double3 x)
{
	double		l;
	t_double3	x2;

	x2 = x * x;
	l = sqrt(x2[0] + x2[1] + x2[2]);
	return (x / ((t_double3){l, l, l}));
}

/*
** Dot product of two vectors
*/

inline	double	dot(t_double3 x1, t_double3 x2)
{
	x1 *= x2;
	return (x1[0] + x1[1] + x1[2]);
}

inline	t_double3	dot3(t_double3 x1, t_double3 x2)
{
	double x;

	x = dot(x1, x2);
	return ((t_double3){x, x, x});
}
