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

static inline void	rotate_object(int obj_i, t_ray axis, double angle)
{
	t_cs temp_obj_cs;

	temp_obj_cs = g_obj[obj_i].lcs;
	temp_obj_cs.u = qrot(vec3quat(g_obj[obj_i].lcs.u), quat(axis, angle));
	temp_obj_cs.v = qrot(vec3quat(g_obj[obj_i].lcs.v), quat(axis, angle));
	temp_obj_cs.n = qrot(vec3quat(g_obj[obj_i].lcs.n), quat(axis, angle));
	g_obj[obj_i].lcs = temp_obj_cs;
	key_pressed = true;
}

static inline void move_object(int obj_i, t_ray dir)
{
	g_obj[obj_i].lcs.o += scale(dir, 50.0);
	key_pressed = true;
}

void	handle_command(void)
{
	uint8_t 	*keystate;

	int i = -1;
	while (1)
	{	
		keystate = (unsigned char *)SDL_GetKeyboardState(NULL);
		SDL_PollEvent(&g_sdl.event);
	    if ((g_sdl.event.type == SDL_QUIT) || keystate[SDL_SCANCODE_ESCAPE])
	        exit(0);
	    /*
	    ** TBD
	    */
	    int x, y;
	    SDL_PumpEvents();
	    if (SDL_GetMouseState(&x, &y) & SDL_BUTTON(SDL_BUTTON_LEFT))
	    {
	    	i = g_myobj[y * wh + x];
	    }
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
	    if (keystate[SDL_SCANCODE_B])
	    {
	    	if (i != -1)
	    	{	    		
		    	printf("obj_rot %d\n", i);
		    	rotate_object(i, g_obj[i].lcs.v, 5.0);
	    	}
	    }
	    if (keystate[SDL_SCANCODE_N])
	    {
	    	if (i != -1)
	    	{	    		
		    	printf("obj_rot %d\n", i);
		    	rotate_object(i, g_obj[i].lcs.v, -5.0);
	    	}
	    }
	    if (keystate[SDL_SCANCODE_C])
	    {
	    	if (i != -1)
	    	{	    		
		    	printf("obj_rot %d\n", i);
		    	rotate_object(i, g_obj[i].lcs.u, 5.0);
	    	}
	    }
	    if (keystate[SDL_SCANCODE_V])
	    {
	    	if (i != -1)
	    	{	    		
		    	printf("obj_rot %d\n", i);
		    	rotate_object(i, g_obj[i].lcs.u, -5.0);
	    	}
	    }
	    if (keystate[SDL_SCANCODE_Z])
	    {
	    	if (i != -1)
	    	{	    		
		    	printf("obj_rot %d\n", i);
		    	rotate_object(i, g_obj[i].lcs.n, 5.0);
	    	}
	    }
	    if (keystate[SDL_SCANCODE_X])
	    {
	    	if (i != -1)
	    	{	    		
		    	printf("obj_rot %d\n", i);
		    	rotate_object(i, g_obj[i].lcs.n, -5.0);
	    	}
	    }
	    if (keystate[SDL_SCANCODE_UP])
	    {
	    	if (i != -1)
	    	{	    		
		    	printf("obj_rot %d\n", i);
		    	move_object(i, g_obj[i].lcs.n);
		    }
	    }
	    if (keystate[SDL_SCANCODE_DOWN])
	    {
	    	if (i != -1)
	    	{	    		
		    	printf("obj_rot %d\n", i);
		    	move_object(i, -g_obj[i].lcs.n);
		    }
	    }
	    if (keystate[SDL_SCANCODE_LEFT])
	    {
	    	if (i != -1)
	    	{	    		
		    	printf("obj_rot %d\n", i);
		    	move_object(i, g_obj[i].lcs.u);
		    }
	    }
	    if (keystate[SDL_SCANCODE_RIGHT])
	    {
	    	if (i != -1)
	    	{	    		
		    	printf("obj_rot %d\n", i);
		    	move_object(i, -g_obj[i].lcs.u);
		    }
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
