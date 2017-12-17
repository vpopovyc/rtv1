/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normals.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 17:32:20 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/26 17:32:21 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __NORMALS_H
# define __NORMALS_H

t_ray	sphere_normal(t_double3 point, t_object *sphere);

t_ray	cylinder_normal(t_double3 point, t_object *sphere);

t_ray	plane_normal(t_double3 point, t_object *plane);

t_ray	cone_normal(t_double3 point, t_object *plane);

#endif
