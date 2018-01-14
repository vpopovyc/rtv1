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
	set_prime_rays();
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
	    if (keystate[SDL_SCANCODE_W])
	    {
	    	printf("forward\n");
	    	g_eye.lcs.o += scale(g_eye.lcs.u, 50.0);
	    	update_view();
	    }
	    if (keystate[SDL_SCANCODE_S])
	    {
	    	printf("backward\n");
	    	g_eye.lcs.o -= scale(g_eye.lcs.u, 50.0);
	    	update_view();
	    }
	    if (keystate[SDL_SCANCODE_D])
	    {
	    	printf("right\n");
	    	g_eye.lcs.o += scale(norm(cross(g_eye.lcs.n, g_eye.lcs.u)), 50.0);
	    	update_view();
	    }
	    if (keystate[SDL_SCANCODE_A])
	    {
	    	printf("left\n");
	    	g_eye.lcs.o -= scale(norm(cross(g_eye.lcs.n, g_eye.lcs.u)), 50.0);
	    	update_view();
	    }
	    if (keystate[SDL_SCANCODE_H])
	    {
	    	printf("rot left\n");
	    	t_cs tmp;

	    	tmp = g_eye.lcs;
	    	tmp.u = qrot(vec3quat(g_eye.lcs.u), quat(g_eye.lcs.n, -5.0));
	    	tmp.v = qrot(vec3quat(g_eye.lcs.v), quat(g_eye.lcs.n, -5.0));
	    	tmp.n = qrot(vec3quat(g_eye.lcs.n), quat(g_eye.lcs.n, -5.0));
	    	g_eye.lcs = tmp;
	    	update_view();
	    }
	    if (keystate[SDL_SCANCODE_L])
	    {
	    	printf("rot right\n");
	    	t_cs tmp;

	    	tmp = g_eye.lcs;
	    	tmp.u = qrot(vec3quat(g_eye.lcs.u), quat(g_eye.lcs.n, 5.0));
	    	tmp.v = qrot(vec3quat(g_eye.lcs.v), quat(g_eye.lcs.n, 5.0));
	    	tmp.n = qrot(vec3quat(g_eye.lcs.n), quat(g_eye.lcs.n, 5.0));
	    	g_eye.lcs = tmp;
	    	update_view();
	    }
	    if (keystate[SDL_SCANCODE_J])
	    {
	    	printf("rot up\n");
	    	t_cs tmp;

	    	tmp = g_eye.lcs;
	    	tmp.u = qrot(vec3quat(g_eye.lcs.u), quat(g_eye.lcs.v, 5.0));
	    	tmp.v = qrot(vec3quat(g_eye.lcs.v), quat(g_eye.lcs.v, 5.0));
	    	tmp.n = qrot(vec3quat(g_eye.lcs.n), quat(g_eye.lcs.v, 5.0));
	    	g_eye.lcs = tmp;
	    	update_view();
	    }
	    if (keystate[SDL_SCANCODE_K])
	    {
	    	printf("rot down\n");
	    	t_cs tmp;

	    	tmp = g_eye.lcs;
	    	tmp.u = qrot(vec3quat(g_eye.lcs.u), quat(g_eye.lcs.v, -5.0));
	    	tmp.v = qrot(vec3quat(g_eye.lcs.v), quat(g_eye.lcs.v, -5.0));
	    	tmp.n = qrot(vec3quat(g_eye.lcs.n), quat(g_eye.lcs.v, -5.0));
	    	g_eye.lcs = tmp;
	    	update_view();
	    }
	    /*
	    ** \TBD
	    */
	}
}
