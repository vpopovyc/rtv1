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

static inline void	update_view(void)
{
	g_work_amount = 0;
	pic_render();
}

void	handle_command(void)
{
	uint8_t 	*keystate;

	while (1)
	{	
		keystate = (unsigned char *)SDL_GetKeyboardState(NULL);
		SDL_PollEvent(&g_sdl.event);
	    if ((g_sdl.event.type == SDL_QUIT) || keystate[SDL_SCANCODE_ESCAPE])
	        exit(0);
	    /*
	    ** TBD
	    */
	    if (keystate[SDL_SCANCODE_A])
	    {
	    	g_obj[1].prop.color.rgba = 0x00008200;
	    	update_unit(&g_obj[1].prop.color);
	    	update_view();
	    }
	    if (keystate[SDL_SCANCODE_S])
	    {
	    	g_obj[1].prop.color.rgba = 0x00820000;
	    	update_unit(&g_obj[1].prop.color);
	    	update_view();
	    }
	    if (keystate[SDL_SCANCODE_D])
	    {
	    	g_obj[0].prop.color.rgba = 0x82000000;
	    	update_unit(&g_obj[0].prop.color);
	    	update_view();
	    }
	    /*
	    ** \TBD
	    */
	}
}
