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
// # include "../headers/parse.h"
# include "vector_types.h"
# include "coord_system.h"
# include "utils.h"
# include "sdl2.h"
# include "objects.h"
# include "intersections.h"

typedef	enum	e_globals
{
	wh = 600,
	ww = 600
}				t_globals;

/*
** Eye object
*/

typedef	struct	s_eye
{
	t_cs		lcs;
}				t_eye;

extern	t_eye	g_eye;

/*
** Ray object
*/

typedef	t_double3	t_ray;

extern	t_ray		g_rays[];

/*
** Set up a shit
*/

void			setup(void);

/*
** Render a shit
*/

void			pic_render(void);

/*
** User input
*/

void			handle_command(void);

#endif
