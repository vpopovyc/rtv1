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
#include "../headers/controller.h"

_Bool g_key_pressed = false;

void	control_eye_move(uint8_t *keystate)
{
	if (keystate[SDL_SCANCODE_W])
		move_eye(g_eye.lcs.u);
	if (keystate[SDL_SCANCODE_S])
		move_eye(-g_eye.lcs.u);
	if (keystate[SDL_SCANCODE_D])
		move_eye(norm(cross(g_eye.lcs.n, g_eye.lcs.u)));
	if (keystate[SDL_SCANCODE_A])
		move_eye(-norm(cross(g_eye.lcs.n, g_eye.lcs.u)));
	if (keystate[SDL_SCANCODE_H])
		rotate_eye(g_eye.lcs.n, -5.0);
	if (keystate[SDL_SCANCODE_L])
		rotate_eye(g_eye.lcs.n, 5.0);
	if (keystate[SDL_SCANCODE_J])
		rotate_eye(g_eye.lcs.v, 5.0);
	if (keystate[SDL_SCANCODE_K])
		rotate_eye(g_eye.lcs.v, -5.0);
}

void	control_obj_move(uint8_t *keystate, int i)
{
	if (i == -1)
		return ;
	if (keystate[SDL_SCANCODE_B])
		rotate_object(i, g_obj[i].lcs.v, 5.0);
	if (keystate[SDL_SCANCODE_N])
		rotate_object(i, g_obj[i].lcs.v, -5.0);
	if (keystate[SDL_SCANCODE_C])
		rotate_object(i, g_obj[i].lcs.u, 5.0);
	if (keystate[SDL_SCANCODE_V])
		rotate_object(i, g_obj[i].lcs.u, -5.0);
	if (keystate[SDL_SCANCODE_Z])
		rotate_object(i, g_obj[i].lcs.n, 5.0);
	if (keystate[SDL_SCANCODE_X])
		rotate_object(i, g_obj[i].lcs.n, -5.0);
	if (keystate[SDL_SCANCODE_UP])
		move_object(i, g_obj[i].lcs.n);
	if (keystate[SDL_SCANCODE_DOWN])
		move_object(i, -g_obj[i].lcs.n);
	if (keystate[SDL_SCANCODE_LEFT])
		move_object(i, g_obj[i].lcs.u);
	if (keystate[SDL_SCANCODE_RIGHT])
		move_object(i, -g_obj[i].lcs.u);
}

void	handle_command(void)
{
	uint8_t		*keystate;
	int			x;
	int			y;
	int			i;

	i = -1;
	x = -1;
	y = -1;
	while (1)
	{
		keystate = (unsigned char *)SDL_GetKeyboardState(NULL);
		SDL_PollEvent(&g_sdl.event);
		if ((g_sdl.event.type == SDL_QUIT) || keystate[SDL_SCANCODE_ESCAPE])
			exit(0);
		if (SDL_GetMouseState(&x, &y) & SDL_BUTTON(SDL_BUTTON_LEFT))
			i = g_myobj[y * wh + x];
		control_eye_move(keystate);
		control_obj_move(keystate, i);
		if (g_key_pressed)
			update_view();
	}
}
