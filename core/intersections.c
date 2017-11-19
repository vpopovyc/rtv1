/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersections.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 19:03:57 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/19 19:03:58 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/core.h"

int		sphere_inter_solution(double t1, double t2)
{
	double	t;

	t = -1.0;
	if (t1 > 0.0)
		t = t1;
	else
	{
		if (t2 > 0.0)
			t = t2;
	}
	return (t);
}

int		sphere_inter(t_ray ray, t_object sphere)
{
	double	a;
	double	b;
	double	c;
	double	disc;
	double	nsqrtdisc;
	t_ray	sray;

	sray = g_eye.lcs.o - sphere.lcs.o;
	a = dot(ray, ray);
	b = 2 * dot(ray, sray);
	c = dot(sray, sray) - (sphere.prop.radius * sphere.prop.radius);
	nsqrtdisc = b * b - 4 * a * c;
	if (nsqrtdisc < 0)
		return (-1);
	else
	{
		disc = sqrt(nsqrtdisc);
		return (sphere_inter_solution((-b + disc) / 2 * a, (-b - disc) / 2.0 * a));
	}
}
