/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:25:30 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/11 19:35:24 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/vector_types.h"
#include <stdio.h>
#include <math.h>
							
#define vec_print(s, x) (printf("%s x: %f y: %f z: %f\n", s, (x)[0], (x)[1], (x)[2]))

/*
** Abs for t_double3 (vector of 3 'double' values)
*/

static	inline	t_double3	vabs(t_double3 x)
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

static	inline	t_double3	np(t_double3 x)
{
	fpclassify(x[0]) != FP_NORMAL ? x[0] = 0.0 : 0;
	fpclassify(x[1]) != FP_NORMAL ? x[1] = 0.0 : 0;
	fpclassify(x[2]) != FP_NORMAL ? x[2] = 0.0 : 0;
	return (x);
}

/*
** Cross Product
** (ax, ay, az) x (bx, by, bz)
** cx = (ay * bz - az * by)
** cy = (az * bx - ax * bz)
** cz = (ax * by - ay * bx)
*/

static	inline	t_double3	cross(t_double3 a, t_double3 b)
{
	return ((t_double3){ a[1] * b[2] - a[2] * b[1],
						 a[2] * b[0] - a[0] * b[2],
						 a[0] * b[1] - a[1] * b[0]});
}

int		main(void)
{
	t_double3 vec_up;
	t_double3 eye;
	t_double3 coi;

	t_double3 dir;
	t_double3 right;
	t_double3 up;

	vec_up = (t_double3){0.0, 0.0, 1.0};
	coi = (t_double3){13.0, 13.0, 13.0};
	eye = (t_double3){15.0, 15.0, 15.0};

	dir = np((eye - coi) / vabs(eye - coi));

	right = np(cross(vec_up, dir) / vabs(cross(vec_up, dir)));

	up = np(cross(dir, right) / vabs(cross(dir, right)));

	vec_print("dir:", dir);
	vec_print("right:", right);
	vec_print("up:", up);
	return (0);
}
