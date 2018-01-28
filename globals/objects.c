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
** Beware of overflows
*/

t_object	g_obj[OBJNUM] =
{
	{
		.lcs = {
			.o = (t_double3){0.0, 0.0, 0.0},
			.n = (t_double3){0.0, 0.0, -1.0},
			.u = (t_double3){1.0, 0.0, 0.0},
			.v = (t_double3){0.0, 1.0, 0.0}
		},
		.prop = {
			.color = {
				.rgba = 0x77c3cf00
			},
			.diffuse = (t_double3){0.8, 0.8, 0.8},
			.ambient = (t_double3){0.7, 0.7, 0.7},
			.specular = (t_double3){0.2, 0.2, 0.2}
		},
		.intersect_me = plane_inter,
		.normal = plane_normal
	},
	{
		.lcs = {
			.o = (t_double3){0.0, 0.0, 0.0},
			.n = (t_double3){0.0, -1.0, 0.0},
			.u = (t_double3){1.0, 0.0, 0.0},
			.v = (t_double3){0.0, 0.0, 1.0}
		},
		.prop = {
			.color = {
				.rgba = 0x22c2cf00
			},
			.diffuse = (t_double3){0.8, 0.8, 0.8},
			.ambient = (t_double3){0.7, 0.7, 0.7},
			.specular = (t_double3){0.2, 0.2, 0.2}
		},
		.intersect_me = plane_inter,
		.normal = plane_normal
	},
	{
		.lcs = {
			.o = (t_double3){0.0, 0.0, 0.0},
			.n = (t_double3){-1.0, 0.0, 0.0},
			.u = (t_double3){0.0, 0.0, 1.0},
			.v = (t_double3){0.0, 1.0, 0.0}
		},
		.prop = {
			.color = {
				.rgba = 0x5fc2cf00
			},
			.diffuse = (t_double3){0.8, 0.8, 0.8},
			.ambient = (t_double3){0.7, 0.7, 0.7},
			.specular = (t_double3){0.2, 0.2, 0.2}
		},
		.intersect_me = plane_inter,
		.normal = plane_normal
	},
	{
		.lcs = {
			.o = (t_double3){600.0, 600.0, 600.0},
			.n = (t_double3){1.0, 0.0, 0.0},
			.u = (t_double3){0.0, 0.0, 1.0},
			.v = (t_double3){0.0, 1.0, 0.0},
		},
		.prop = {
			.color = {
				.rgba = 0xff0f0f00
			},
			.radius = 42.0,
			.diffuse = (t_double3){0.3, 0.3, 0.3},
			.ambient = (t_double3){0.5, 0.5, 0.5},
			.specular = (t_double3){0.9, 0.9, 0.9}
		},
		.intersect_me = sphere_inter,
		.normal = sphere_normal
	},
	{
		.lcs = {
			.o = (t_double3){500.0, 0.0, 270.0},
			.v = (t_double3){0.0, 1.0, 0.0},
			.u = (t_double3){0.0, 0.0, 1.0},
			.n = (t_double3){1.0, 0.0, 0.0}
		},
		.prop = {
			.color = {
				.rgba = 0x02028200
			},
			.radius = 30.0,
			.diffuse = (t_double3){0.9, 0.9, 0.9},
			.ambient = (t_double3){0.7, 0.7, 0.7},
			.specular = (t_double3){0.6, 0.6, 0.6}
		},
		.intersect_me = cylinder_inter,
		.normal = cylinder_normal
	},
	{
		.lcs = {
			.o = (t_double3){270.0, 0.0, 500.0},
			.v = (t_double3){0.0, 1.0, 0.0},
			.u = (t_double3){0.0, 0.0, 1.0},
			.n = (t_double3){1.0, 0.0, 0.0}
		},
		.prop = {
			.color = {
				.rgba = 0x02028200
			},
			.radius = 30.0,
			.diffuse = (t_double3){0.9, 0.9, 0.9},
			.ambient = (t_double3){0.7, 0.7, 0.7},
			.specular = (t_double3){0.6, 0.6, 0.6}
		},
		.intersect_me = cylinder_inter,
		.normal = cylinder_normal
	},
	{
		.lcs = {
			.o = (t_double3){270.0, 0.0, 500.0},
			.n = (t_double3){1.0, 0.0, 0.0},
			.u = (t_double3){0.0, 0.0, 1.0},
			.v = (t_double3){0.0, 1.0, 0.0}
		},
		.prop = {
			.color = {
				.rgba = 0xce2fc400
			},
			.radius = 70.0,
			.diffuse = (t_double3){0.3, 0.3, 0.3},
			.ambient = (t_double3){0.5, 0.5, 0.5},
			.specular = (t_double3){0.9, 0.9, 0.9}
		},
		.intersect_me = sphere_inter,
		.normal = sphere_normal
	},
	{
		.lcs = {
			.o = (t_double3){500.0, 0.0, 270.0},
			.n = (t_double3){1.0, 0.0, 0.0},
			.u = (t_double3){0.0, 0.0, 1.0},
			.v = (t_double3){0.0, 1.0, 0.0}
		},
		.prop = {
			.color = {
				.rgba = 0xce2fc400
			},
			.radius = 70.0,
			.diffuse = (t_double3){0.3, 0.3, 0.3},
			.ambient = (t_double3){0.5, 0.5, 0.5},
			.specular = (t_double3){0.9, 0.9, 0.9}
		},
		.intersect_me = sphere_inter,
		.normal = sphere_normal
	},
	{
		.lcs = {
			.o = (t_double3){800.0, 0.0, 270.0},
			.v = (t_double3){0.0, 1.0, 0.0},
			.u = (t_double3){0.0, 0.0, 1.0},
			.n = (t_double3){1.0, 0.0, 0.0}
		},
		.prop = {
			.color = {
				.rgba = 0x02028200
			},
			.radius = 30.0,
			.diffuse = (t_double3){0.9, 0.9, 0.9},
			.ambient = (t_double3){0.7, 0.7, 0.7},
			.specular = (t_double3){0.6, 0.6, 0.6}
		},
		.intersect_me = cylinder_inter,
		.normal = cylinder_normal
	},
	{
		.lcs = {
			.o = (t_double3){270.0, 0.0, 800.0},
			.v = (t_double3){0.0, 1.0, 0.0},
			.u = (t_double3){0.0, 0.0, 1.0},
			.n = (t_double3){1.0, 0.0, 0.0}
		},
		.prop = {
			.color = {
				.rgba = 0x02028200
			},
			.radius = 30.0,
			.diffuse = (t_double3){0.9, 0.9, 0.9},
			.ambient = (t_double3){0.7, 0.7, 0.7},
			.specular = (t_double3){0.6, 0.6, 0.6}
		},
		.intersect_me = cylinder_inter,
		.normal = cylinder_normal
	},
	{
		.lcs = {
			.o = (t_double3){270.0, 0.0, 800.0},
			.n = (t_double3){1.0, 0.0, 0.0},
			.u = (t_double3){0.0, 0.0, 1.0},
			.v = (t_double3){0.0, 1.0, 0.0}
		},
		.prop = {
			.color = {
				.rgba = 0xce2fc400
			},
			.radius = 70.0,
			.diffuse = (t_double3){0.3, 0.3, 0.3},
			.ambient = (t_double3){0.5, 0.5, 0.5},
			.specular = (t_double3){0.9, 0.9, 0.9}
		},
		.intersect_me = sphere_inter,
		.normal = sphere_normal
	},
	{
		.lcs = {
			.o = (t_double3){800.0, 0.0, 270.0},
			.n = (t_double3){1.0, 0.0, 0.0},
			.u = (t_double3){0.0, 0.0, 1.0},
			.v = (t_double3){0.0, 1.0, 0.0}
		},
		.prop = {
			.color = {
				.rgba = 0xce2fc400
			},
			.radius = 70.0,
			.diffuse = (t_double3){0.3, 0.3, 0.3},
			.ambient = (t_double3){0.5, 0.5, 0.5},
			.specular = (t_double3){0.9, 0.9, 0.9}
		},
		.intersect_me = sphere_inter,
		.normal = sphere_normal
	},
	{
		.lcs = {
			.o = (t_double3){1000.0, 0.0, 270.0},
			.v = (t_double3){0.0, 1.0, 0.0},
			.u = (t_double3){0.0, 0.0, 1.0},
			.n = (t_double3){1.0, 0.0, 0.0}
		},
		.prop = {
			.color = {
				.rgba = 0x02028200
			},
			.radius = 30.0,
			.diffuse = (t_double3){0.9, 0.9, 0.9},
			.ambient = (t_double3){0.7, 0.7, 0.7},
			.specular = (t_double3){0.6, 0.6, 0.6}
		},
		.intersect_me = cylinder_inter,
		.normal = cylinder_normal
	},
	{
		.lcs = {
			.o = (t_double3){270.0, 0.0, 1000.0},
			.v = (t_double3){0.0, 1.0, 0.0},
			.u = (t_double3){0.0, 0.0, 1.0},
			.n = (t_double3){1.0, 0.0, 0.0}
		},
		.prop = {
			.color = {
				.rgba = 0x02028200
			},
			.radius = 30.0,
			.diffuse = (t_double3){0.9, 0.9, 0.9},
			.ambient = (t_double3){0.7, 0.7, 0.7},
			.specular = (t_double3){0.6, 0.6, 0.6}
		},
		.intersect_me = cylinder_inter,
		.normal = cylinder_normal
	},
	{
		.lcs = {
			.o = (t_double3){270.0, 0.0, 1000.0},
			.n = (t_double3){1.0, 0.0, 0.0},
			.u = (t_double3){0.0, 0.0, 1.0},
			.v = (t_double3){0.0, 1.0, 0.0}
		},
		.prop = {
			.color = {
				.rgba = 0xce2fc400
			},
			.radius = 70.0,
			.diffuse = (t_double3){0.3, 0.3, 0.3},
			.ambient = (t_double3){0.5, 0.5, 0.5},
			.specular = (t_double3){0.9, 0.9, 0.9}
		},
		.intersect_me = sphere_inter,
		.normal = sphere_normal
	},
	{
		.lcs = {
			.o = (t_double3){1000.0, 0.0, 270.0},
			.n = (t_double3){1.0, 0.0, 0.0},
			.u = (t_double3){0.0, 0.0, 1.0},
			.v = (t_double3){0.0, 1.0, 0.0}
		},
		.prop = {
			.color = {
				.rgba = 0xce2fc400
			},
			.radius = 70.0,
			.diffuse = (t_double3){0.3, 0.3, 0.3},
			.ambient = (t_double3){0.5, 0.5, 0.5},
			.specular = (t_double3){0.9, 0.9, 0.9}
		},
		.intersect_me = sphere_inter,
		.normal = sphere_normal
	},
	{
		.lcs = {
			.o = (t_double3){600.0, 600.0, 600.0},
			.v = (t_double3){0.0, 1.0, 0.0},
			.u = (t_double3){0.0, 0.0, 1.0},
			.n = (t_double3){1.0, 0.0, 0.0}
		},
		.prop = {
			.color = {
				.rgba = 0x4447A400
			},
			.a_theta = (10.5 * PI_180),
			.diffuse = (t_double3){0.9, 0.9, 0.9},
			.ambient = (t_double3){0.7, 0.7, 0.7},
			.specular = (t_double3){0.4, 0.4, 0.4}
		},
		.intersect_me = cone_inter,
		.normal = cone_normal
	},
};
