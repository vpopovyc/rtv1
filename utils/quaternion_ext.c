/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quaternion_ext.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 16:11:23 by vpopovyc          #+#    #+#             */
/*   Updated: 2018/01/28 16:11:29 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/utils.h"

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
