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
int 	g_myobj[ww * wh];

/*
** Light sources
*/

t_light	g_light[LNUM] = 
{
	{
		.lcs = {
			.o = (t_double3){1000.0, 1000.0, 500.0}
		}
	},
	{
		.lcs = {
			.o = (t_double3){500.0, 1000.0, 1000.0}
		}
	}
};
