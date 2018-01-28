/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controller.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 17:15:30 by vpopovyc          #+#    #+#             */
/*   Updated: 2018/01/28 17:15:31 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/controller.h"

void	update_view(void)
{
	g_key_pressed = false;
	g_work_amount = 0;
	set_prime_rays();
	pic_render();
}

void	move_eye(t_ray dir)
{
	g_eye.lcs.o += scale(dir, 50.0);
	g_key_pressed = true;
}

void	rotate_eye(t_ray axis, double angle)
{
	t_cs temp_eye_cs;

	temp_eye_cs = g_eye.lcs;
	temp_eye_cs.u = qrot(vec3quat(g_eye.lcs.u), quat(axis, angle));
	temp_eye_cs.v = qrot(vec3quat(g_eye.lcs.v), quat(axis, angle));
	temp_eye_cs.n = qrot(vec3quat(g_eye.lcs.n), quat(axis, angle));
	g_eye.lcs = temp_eye_cs;
	g_key_pressed = true;
}

void	rotate_object(int obj_i, t_ray axis, double angle)
{
	t_cs temp_obj_cs;

	temp_obj_cs = g_obj[obj_i].lcs;
	temp_obj_cs.u = qrot(vec3quat(g_obj[obj_i].lcs.u), quat(axis, angle));
	temp_obj_cs.v = qrot(vec3quat(g_obj[obj_i].lcs.v), quat(axis, angle));
	temp_obj_cs.n = qrot(vec3quat(g_obj[obj_i].lcs.n), quat(axis, angle));
	g_obj[obj_i].lcs = temp_obj_cs;
	g_key_pressed = true;
}

void	move_object(int obj_i, t_ray dir)
{
	g_obj[obj_i].lcs.o += scale(dir, 50.0);
	g_key_pressed = true;
}
