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

t_eye g_eye = (t_eye)
{
	.lcs = (t_cs)
	{
		.ox = 2.0,
		.oy = 1.0,
		.oz = 3.0,
		.bv = (t_double3){10.0, 10.0, 10.0}
	}
};
