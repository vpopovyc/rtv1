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

# define FOV 				(90 / 5 * PI_180)

typedef	struct				s_data
{
	t_color					color;
	t_double3				diffuse;
	t_double3				ambient;
	t_double3				specular;
	double					radius;
	double					a_theta;
}							t_data;

typedef	struct s_object		t_object;
typedef	t_double3			t_ray;

typedef	struct				s_object
{
	t_cs					lcs;
	t_data					prop;
	double					(*intersect_me)(t_ray ray, t_double3 ray_o,
		t_object *self);
	t_ray					(*normal)(t_double3 point, t_object *self);
}							t_object;

extern	t_object			g_obj[];

#endif
