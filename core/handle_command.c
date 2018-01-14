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
#include <stdbool.h>

static _Bool key_pressed = false;

static inline void	update_view(void)
{
	key_pressed = false;
	g_work_amount = 0;
	set_prime_rays();
	pic_render();
}

static inline void	move_eye(t_ray dir)
{
	g_eye.lcs.o += scale(dir, 50.0);
	key_pressed = true;
}

static inline void	rotate_eye(t_ray axis, double angle)
{
	t_cs temp_eye_cs;

	temp_eye_cs = g_eye.lcs;
	temp_eye_cs.u = qrot(vec3quat(g_eye.lcs.u), quat(axis, angle));
	temp_eye_cs.v = qrot(vec3quat(g_eye.lcs.v), quat(axis, angle));
	temp_eye_cs.n = qrot(vec3quat(g_eye.lcs.n), quat(axis, angle));
	g_eye.lcs = temp_eye_cs;
	key_pressed = true;
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
	    if (keystate[SDL_SCANCODE_W])
	    {
	    	printf("forward\n");
	    	move_eye(g_eye.lcs.u);
	    }
	    if (keystate[SDL_SCANCODE_S])
	    {
	    	printf("backward\n");
	    	move_eye(-g_eye.lcs.u);
	    }
	    if (keystate[SDL_SCANCODE_D])
	    {
	    	printf("right\n");
	    	move_eye(norm(cross(g_eye.lcs.n, g_eye.lcs.u)));
	    }
	    if (keystate[SDL_SCANCODE_A])
	    {
	    	printf("left\n");
	    	move_eye(-norm(cross(g_eye.lcs.n, g_eye.lcs.u)));
	    }
	    if (keystate[SDL_SCANCODE_H])
	    {
	    	printf("rot left\n");
	    	rotate_eye(g_eye.lcs.n, -5.0);
	    }
	    if (keystate[SDL_SCANCODE_L])
	    {
	    	printf("rot right\n");
	    	rotate_eye(g_eye.lcs.n, 5.0);
	    }
	    if (keystate[SDL_SCANCODE_J])
	    {
	    	printf("rot up\n");
	    	rotate_eye(g_eye.lcs.v, 5.0);
	    }
	    if (keystate[SDL_SCANCODE_K])
	    {
	    	printf("rot down\n");
	    	rotate_eye(g_eye.lcs.v, -5.0);
	    }
		if (key_pressed)    
		{
			update_view();
		}
	    /*
	    ** \TBD
	    */
	}
}
