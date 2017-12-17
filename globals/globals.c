/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   globals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 20:44:29 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/14 20:44:30 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/core.h"

/*
** Global access point to graphic struct
** ** inits in sdl2/init.c
*/

t_sdl2	g_sdl;

/*
** eye object
*/

t_eye	g_eye;

/*
** prime rays
*/

t_ray	g_rays[ww * wh];

/*
** Light sources
*/

t_light	g_light[LNUM] = 
{
	{
		.lcs = {
			.o = (t_double3){250.0, 150.0, 250.0},
			.u = (t_double3){1.0, 0.0, 0.0},
			.v = (t_double3){0.0, 1.0, 0.0},
			.n = (t_double3){0.0, 0.0, 1.0}
		},
		.color = {
			.rgba = 0xff000f00
		},
		.intensity = (t_double3){1.0, 1.0, 1.0}
	}
	// {
	// 	.lcs = {
	// 		.o = (t_double3){600.0, 400.0, 800.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.color = {
	// 		.rgba = 0xa2e20200
	// 	},
	// 	.intensity = (t_double3){1.0, 1.0, 1.0}
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){-800.0, 0.0, 0.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.color = {
	// 		.rgba = 0xa2e20200
	// 	},
	// 	.intensity = (t_double3){1.0, 1.0, 1.0}
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){-800.0, 0.0, 0.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.color = {
	// 		.rgba = 0xa2e20200
	// 	},
	// 	.intensity = (t_double3){1.0, 1.0, 1.0}
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, 0.0, 800.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.color = {
	// 		.rgba = 0x82020200
	// 	},
	// 	.intensity = (t_double3){1.0, 1.0, 1.0}
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, 0.0, -800.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.color = {
	// 		.rgba = 0x82020200
	// 	},
	// 	.intensity = (t_double3){1.0, 1.0, 1.0}
	// }
};
