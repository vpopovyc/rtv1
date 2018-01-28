/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sdl2.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 20:18:29 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/14 20:18:31 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SDL2_H
# define __SDL2_H

# include <SDL2/SDL.h>

/*
** Struct to keep all needed data together
*/

typedef	struct		s_sdl2
{
	SDL_Window		*window;
	SDL_Renderer	*renderer;
	SDL_Texture		*texture;
	SDL_Event		event;
	uint32_t		*pixels;
}					t_sdl2;

/*
** Function that initializes global sdl2 struct
*/

void				init_sdl(const char *name);

/*
** base putpixel
*/

extern	void		set_pixel(int color, int x,
	int y) __attribute__((always_inline));

/*
** Global access point to graphic struct
*/

extern	t_sdl2		g_sdl;

#endif
