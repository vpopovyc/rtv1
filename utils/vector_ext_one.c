/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_ext_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 16:13:37 by vpopovyc          #+#    #+#             */
/*   Updated: 2018/01/28 16:13:38 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/utils.h"

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

inline	t_double3	scale(const t_double3 x, const double scale)
{
	return ((t_double3){x[0] * scale,
						x[1] * scale,
						x[2] * scale});
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
