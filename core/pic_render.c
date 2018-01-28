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

pthread_t			g_treads[thread_num];
pthread_cond_t		g_work_done;
pthread_mutex_t		g_general_mutex = PTHREAD_MUTEX_INITIALIZER;
int					g_work_amount = 0;

static inline void	update_picture(void)
{
	SDL_UpdateTexture(g_sdl.texture, NULL, g_sdl.pixels, ww * sizeof(int32_t));
	SDL_RenderCopy(g_sdl.renderer, g_sdl.texture, NULL, NULL);
	SDL_RenderPresent(g_sdl.renderer);
}

void				render_in_range(int x, int y, int x_max, int y_max)
{
	while (y < y_max)
	{
		x = 0;
		while (x < x_max)
		{
			set_pixel(trace(g_rays[y * wh + x], g_eye.lcs.o,
				&g_myobj[y * wh + x]), x, y);
			++x;
		}
		++y;
	}
}

void				*thread_entry_point(void *arg)
{
	int i;

	i = *((int*)arg);
	free(arg);
	render_in_range(0, i * render_pitch, ww, (i + 1) * render_pitch);
	++g_work_amount;
	pthread_mutex_lock(&g_general_mutex);
	pthread_cond_signal(&g_work_done);
	pthread_mutex_unlock(&g_general_mutex);
	pthread_exit(0);
}

static inline void	custom_attr_init(pthread_attr_t *attr)
{
	pthread_attr_init(attr);
	pthread_attr_setdetachstate(attr, PTHREAD_CREATE_DETACHED);
	pthread_attr_setschedpolicy(attr, SCHED_FIFO);
	pthread_attr_setguardsize(attr, 8192);
	pthread_attr_setscope(attr, PTHREAD_SCOPE_SYSTEM);
}

void				pic_render(void)
{
	int				i;
	int				*i_p;
	pthread_attr_t	thread_atrr;

	i = 0;
	custom_attr_init(&thread_atrr);
	while (i < thread_num)
	{
		i_p = malloc(sizeof(int));
		*i_p = i;
		pthread_create(&g_treads[i], &thread_atrr, thread_entry_point, i_p);
		++i;
	}
	pthread_mutex_lock(&g_general_mutex);
	while (g_work_amount != thread_num)
		pthread_cond_wait(&g_work_done, &g_general_mutex);
	pthread_mutex_unlock(&g_general_mutex);
	update_picture();
}
