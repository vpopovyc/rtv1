/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coord_system.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 20:49:11 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/19 20:49:13 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __COOR_SYSTEM_H
# define __COOR_SYSTEM_H

/*
** Coordinate system
** ** origin point
** ** bv – 3 basis vectors: u - dir, v - up, n - right
*/

typedef	struct	s_cs
{
	t_double3	o;
	t_double3	u;
	t_double3	v;
	t_double3	n;
}				t_cs;

#endif
