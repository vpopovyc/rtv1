/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 20:20:48 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/14 20:20:49 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/core.h"

/*
** Function that initializes global sdl2 struct
*/

void	init_sdl(void)
{
	SDL_Init(SDL_INIT_VIDEO);
    g_sdl.window = SDL_CreateWindow("rtv1", SDL_WINDOWPOS_UNDEFINED,
                                            SDL_WINDOWPOS_UNDEFINED,
                                            ww,
                                            wh,
                                            0);
    g_sdl.renderer = SDL_CreateRenderer(g_sdl.window, -1,
                                            SDL_RENDERER_ACCELERATED);
    g_sdl.texture = SDL_CreateTexture(g_sdl.renderer,
                                            SDL_PIXELFORMAT_RGBA8888, 
                                            SDL_TEXTUREACCESS_STREAMING, 
                                            ww,
                                            wh);
    g_sdl.pixels = malloc(sizeof(uint32_t) * wh * ww);
    ft_memset(g_sdl.pixels, 0, sizeof(uint32_t) * wh * ww);
}
