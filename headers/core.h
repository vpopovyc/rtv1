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

/*
** Coordinate system
** ** origin point
** ** bv – 3 basis vectors: dir, up, right
*/

typedef	struct	s_cs
{
	double		ox;
	double		oy;
	double		oz;
	t_double3	bv;
}				t_cs;

/*
** Eye object
*/

typedef	struct	s_eye
{
	t_cs		lcs;
}				t_eye;

#endif
