/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 20:36:30 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/01 20:36:57 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CORE_H
# define __CORE_H

# include "../libft/libft.h"
# include "vector_types.h"
# include "color.h"
# include "coord_system.h"
# include "utils.h"
# include "sdl2.h"
# include "objects.h"
# include "intersections.h"
# include "normals.h"
# include "phong.h"
# include <pthread.h>

typedef	enum		e_globals
{
	wh = 600,
	ww = 600,
	was_hit = 1,
	no_hit = 0,

	bg_color = 0xffffff00,
	thread_num = 8,
	render_pitch = wh / thread_num
}					t_globals;

# define OBJNUM		(17)

# define LNUM		(2)

# define PRESC_ERR	(1e-6)

/*
** Work amount
*/

extern int			g_work_amount;

/*
** Eye object
*/

typedef	struct		s_eye
{
	t_cs			lcs;
}					t_eye;

extern	t_eye		g_eye;

/*
** Ray object
*/

typedef	t_double3	t_ray;

extern	t_ray		g_rays[];
extern	int			g_myobj[];

/*
** Light point
*/

typedef	struct		s_light
{
	t_cs			lcs;
	t_color			color;
	t_double3		intensity;
}					t_light;

extern	t_light		g_light[];

/*
** Set up a shit
*/

void				setup(void);
void				set_prime_rays(void);

/*
** Render a shit
*/

void				pic_render(void);

/*
** Thread starting routine
*/

void				*thread_entry_point(void *arg) __attribute__((noreturn));

/*
** User input
*/

void				handle_command(void);

/*
** Trace a ray from origin with given direction
*/

int					trace(t_ray ray, t_double3 ray_o, int *obj_i);

#endif
