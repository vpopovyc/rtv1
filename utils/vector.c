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
** Implicit conv between t_double4 and t_double3
*/

inline	t_double3	vec(t_double4 x)
{
	return ((t_double3){x[0], x[1], x[2]});
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
	x[0] = x[0] < 0.0 ? -x[0] : x[0];
	x[1] = x[1] < 0.0 ? -x[1] : x[1];
	x[2] = x[2] < 0.0 ? -x[2] : x[2];
	return (x);
}

/*
** C99 has macros for the classification of floating-point numbers:
** fpclassify(x) returns one of:
** ** FP_NAN: 		x == nan
** ** FP_INFINITE: 	x == +inf || x == -inf
** ** FP_ZERO: 		x == 0.0
** ** FP_NORMAL: 	x == ok
*/

inline	t_double3	np(t_double3 x)
{
	(fpclassify(x[0]) != FP_NORMAL || x[0] == -0.0) ? x[0] = 0.0 : 0;
	(fpclassify(x[1]) != FP_NORMAL || x[1] == -0.0) ? x[1] = 0.0 : 0;
	(fpclassify(x[2]) != FP_NORMAL || x[2] == -0.0) ? x[2] = 0.0 : 0;
	return (x);
}