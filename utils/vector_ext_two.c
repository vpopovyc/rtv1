/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_ext_two.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 16:13:44 by vpopovyc          #+#    #+#             */
/*   Updated: 2018/01/28 16:13:46 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/utils.h"

/*
** Dot product of two vectors
*/

inline	double		dot(t_double3 x1, t_double3 x2)
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
