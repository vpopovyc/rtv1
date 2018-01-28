/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phong.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 22:33:24 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/21 22:33:26 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONG_H
# define __PHONG_H

typedef	struct		s_hit_point
{
	int				was_hit;
	int				i;
	t_double3		int_point;
}					t_hit_point;

typedef	struct		s_phong
{
	t_double3		diffuse;
	t_double3		intensity;
}					t_phong;

/*
** Phong illumination model
*/

extern t_double3	ambient(int i) __attribute__((always_inline));
extern t_double3	diffuse(t_hit_point p,
	int i) __attribute__((always_inline));
extern t_double3	specular(t_hit_point p,
	int i) __attribute__((always_inline));

#endif
