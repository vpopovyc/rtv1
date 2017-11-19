/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_command.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 20:31:45 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/19 20:31:47 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/core.h"

void	handle_command(void)
{
	uint8_t 	*keystate;

	while (1)
	{	
		keystate = (unsigned char *)SDL_GetKeyboardState(NULL);
		SDL_PollEvent(&g_sdl.event);
	    if ((g_sdl.event.type == SDL_QUIT) || keystate[SDL_SCANCODE_ESCAPE])
	        exit(0);
	}
}
