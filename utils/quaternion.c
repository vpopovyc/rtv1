/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quaternion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 17:23:31 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/12 17:23:33 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This is shit, should be reworked 

#include "../headers/utils.h"

/*
** Creates quaternion using 3d vector and rotation angle
*/

inline	t_double4	quat(const t_double3 x, const double angle)
{
	return ((t_double4){x[0] * sin(angle * 0.5 * PI_180),
						x[1] * sin(angle * 0.5 * PI_180),
						x[2] * sin(angle * 0.5 * PI_180),
						cos(angle * 0.5 * PI_180)});
}

inline	t_double4 	vec3quat(const t_double3 x)
{
	return ((t_double4){x[0], x[1], x[2], 0.0});
}

/*
** Quaternion mul block calculates the product for 2 given quaternions
** ** qi' = aw * bi + ai * bw + aj * bk - ak * bj
** ** qj' = aw * bj - ai * bk + aj * bw + ak * bi
** ** qk' = aw * bk + ai * bj - aj * bi + ak * bw
** ** qw' = aw * bw - ai * bi - aj * bj - ak * bk
*/

inline	t_double4	qmul(const t_double4 a, const t_double4 b)
{
	return ((t_double4){
					a[3] * b[0] + a[0] * b[3] + a[1] * b[2] - a[2] * b[1],
					a[3] * b[1] - a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
					a[3] * b[2] + a[0] * b[1] - a[1] * b[0] + a[2] * b[3],
					a[3] * b[3] - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]});
}

/*
** Conjugation of quaternion
** ** q' = w - ai - bj - ck
*/

inline	t_double4	qconjugate(const t_double4 x)
{
	return ((t_double4){-x[0], -x[1], -x[2], x[3]});
}

/*
** Norm of quaternion
** ** n = xx + yy + zz + ww
*/

inline	double		qnorm(t_double4 x)
{
	x *= x;
	return (x[0] + x[1] + x[2] + x[3]);
}

/*
** Determines identity quaternion(element)
** ** q' = conjugate(q) / norm(q)
*/

inline	t_double4	qinv(const t_double4 x)
{
	t_double4	c;
	double		n;	

	c = qconjugate(x);
	n = qnorm(x);
	return ((t_double4){c[0] / n, c[1] / n, c[2] / n, c[3] / n});
}

/*
** Rotates unit vector around another unit vector on defined angle
** ** new_v = q * old_v * q^-1 
*/

inline	t_double3	qrot(const t_double4 x, const t_double4 n)
{
	return (norm(vec(qmul(qmul(n, x), qinv(n)))));
}
