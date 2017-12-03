/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_pixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 18:50:27 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/19 18:50:29 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/sdl2.h"
#include "../headers/core.h"

inline void	set_pixel(int color, int x, int y)
{
	g_sdl.pixels[y * wh + x] = color;
}
