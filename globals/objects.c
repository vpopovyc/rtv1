/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   objects.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 21:20:24 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/01 21:20:26 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/core.h"

/*
** TBD
*/

t_object	g_obj[OBJNUM] =
{
	{
		.lcs = {
			.o = (t_double3){850.0, 0.0, 0.0},
			.u = (t_double3){1.0, 0.0, 0.0},
			.v = (t_double3){0.0, 1.0, 0.0},
			.n = (t_double3){0.0, 0.0, 1.0}
		},
		.prop = {
			.radius = 500.0,
			.color = 0x0090ac00
		},
		.intersect_me = sphere_inter
	},
	{
		.lcs = {
			.o = (t_double3){85.0, 0.0, 0.0},
			.u = (t_double3){1.0, 0.0, 0.0},
			.v = (t_double3){0.0, 1.0, 0.0},
			.n = (t_double3){0.0, 0.0, 1.0}
		},
		.prop = {
			.radius = 250.0,
			.color = 0x02820200
		},
		.intersect_me = sphere_inter
	},
	{
		.lcs = {
			.o = (t_double3){-250.0, 0.0, 0.0},
			.u = (t_double3){1.0, 0.0, 0.0},
			.v = (t_double3){0.0, 1.0, 0.0},
			.n = (t_double3){0.0, 0.0, 1.0}
		},
		.prop = {
			.radius = 75.0,
			.color = 0x02028200
		},
		.intersect_me = sphere_inter
	},
	{
		.lcs = {
			.o = (t_double3){-370.0, 0.0, 0.0},
			.u = (t_double3){1.0, 0.0, 0.0},
			.v = (t_double3){0.0, 1.0, 0.0},
			.n = (t_double3){0.0, 0.0, 1.0}
		},
		.prop = {
			.radius = 40.0,
			.color = 0x82020200
		},
		.intersect_me = sphere_inter
	}
};
