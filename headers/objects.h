/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   objects.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:34:39 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/11 16:34:40 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __OBJECTS_H
# define __OBJECTS_H

# include "vector_types.h"

# define OBJNUM	2

typedef	enum	e_obj_type
{
	sphere,
	//TBD
}				t_obj_type;

typedef	struct	s_object
{
	t_double3	pos;
	t_double3	lcs;
	t_obj_type	type;
}				t_object;

extern	t_object	g_obj[];

#endif