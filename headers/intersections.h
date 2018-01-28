/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersections.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 19:07:17 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/19 19:07:18 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERSECTIONS_H
# define __INTERSECTIONS_H

typedef	t_double3	t_ray;

double		sphere_inter(t_ray ray, t_double3 ray_o, t_object *sphere);

double		cylinder_inter(t_ray ray, t_double3 ray_o, t_object *cylinder);

double		plane_inter(t_ray ray, t_double3 ray_o, t_object *plane);

double		cone_inter(t_ray ray, t_double3 ray_o, t_object *cone);

#endif
