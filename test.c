/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:25:30 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/11 19:35:24 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/utils.h"
#include <stdio.h>

t_eye g_eye = (t_eye)
{
	.lcs = (t_cs)
	{
		.ox = 2.0,
		.oy = 1.0,
		.oz = 3.0,
		.bv = (t_double3){10.0, 10.0, 10.0}
	}
};

int		main(void)
{
	t_double3 vec_up;
	t_double3 eye;
	t_double3 coi;

	t_double3 dir;
	t_double3 right;
	t_double3 up;

	vec_up = (t_double3){0.0, 1.0, 0.0};
	coi = (t_double3){14.0, 14.0, 14.0};
	eye = (t_double3){13.0, 13.0, 13.0};

	dir = norm(eye - coi);
	up = norm(cross(vec_up, dir));
	right = norm(cross(dir, up));

	vec_print("dir:", dir);
	vec_print("right:", right);
	vec_print("up:", up);

	// t_double3 n = (t_double3){1.0, 0.0, 1.0};

	// t_double3 newz = qrot((t_double4){0.0, 0.0, 1.0, 0.0}, quat(n, 180.0));

	// vec_print("newz:", newz);

	// vec_print("g_eye:", g_eye.lcs.bv);

	return (0);
}
