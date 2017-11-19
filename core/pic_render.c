/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pic_render.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 18:50:27 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/19 18:50:29 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/core.h"

/*
** TEMP
*/

void	temp_put_pixel(int color, int x, int y)
{
	g_sdl.pixels[y * wh + x] = color;
}

/*
** TEMP
*/

int 	check_each_object_for_intersection(const int x, const int y)
{
	int		obj_id;
	int		t;
	int		t_min;
	int		closest_obj;

	t_min = -1;
	closest_obj = -1;
	obj_id = 0;
	while (obj_id < OBJNUM)
	{
		t = g_obj[obj_id].intersect_me(g_rays[y * wh + x], g_obj[obj_id]);
		if ((t < t_min || t_min == -1) && t != -1)
		{
			t_min = t;
			closest_obj = obj_id;
		}
		++obj_id;
	}
	if (closest_obj == -1)
		return (0xffffff00);
	else
		return (g_obj[closest_obj].prop.color);
}

void	render_in_range(int x_min, int x_max, int y_min, int y_max)
{
	int	color;

	while (y_min < y_max)
	{
		x_min = 0;
		while (x_min < x_max)
		{
			color = check_each_object_for_intersection(x_min, y_min);
			temp_put_pixel(color, x_min, y_min);
			++x_min;
		}
		++y_min;
	}
}

void	pic_render(void)
{
	render_in_range(0, ww, 0, wh);
	SDL_UpdateTexture(g_sdl.texture, NULL, g_sdl.pixels, ww * sizeof(int));
    SDL_RenderClear(g_sdl.renderer);
    SDL_RenderCopy(g_sdl.renderer, g_sdl.texture, NULL, NULL);
    SDL_RenderPresent(g_sdl.renderer);
}
