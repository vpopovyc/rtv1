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

// # include "core.h"

# define OBJNUM	(4)
# define FOV (90/5 * PI_180)

typedef	enum	e_obj_type
{
	sphere,
	//TBD
}				t_obj_type;

typedef	struct	s_data
{
	double		radius;
	double		color;
}				t_data;

typedef	struct	s_object	t_object;
typedef	t_double3	t_ray;

typedef	struct	s_object
{
	t_cs		lcs;
	t_data		prop;
	int			(*intersect_me)(t_ray ray, t_object self);	
}				t_object;

extern	t_object	g_obj[];

#endif


/*

float Sphere::intersection(SbVec3f rayStart, SbVec3f rayDirection)
{
	d = rayDirection;

	float t1 = -1;
	float t2 = -1;
	float discriminent;
	float t = -1; //temporary == e-c
	
	temporary = rayStart;
	temporary -=center;

	float a = d.dot(d);
	float b = 2 * (d.dot(temporary));
	float c = temporary.dot(temporary) - (radius * radius);
	float disc;
	
	disc = b * b - 4 * a * c;
	if(disc < 0)
	{
		return -1;
	}
	else
	{
		discriminent = sqrt(disc);
		t1 = (-b + discriminent) / (2 * a);
		t2 = (-b - discriminent) / (2 * a);
		if(t1)
		{
			t = t1;
		}
		else
		{
			if(t2>0)
			{
				t = t2;
			}
		}
	}
	return t;
}

*/