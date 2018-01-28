/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 15:33:00 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/12 15:33:01 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __UTILS_H
# define __UTILS_H

# include "core.h"

/*
** utils/vector.c
*/

extern	t_double3	scale(const t_double3 x,
	const double scale) __attribute__((always_inline));
extern	t_double3	vabs(t_double3 x) __attribute__((always_inline));
extern	t_double3	vabsmod(t_double3 x) __attribute__((always_inline));
extern	double		dot(t_double3 x1,
	t_double3 x2) __attribute__((always_inline));
extern	t_double3	dot3(t_double3 x1,
	t_double3 x2) __attribute__((always_inline));
extern	t_double3	vec(t_double4 x) __attribute__((always_inline));
extern	t_double3	vec3(double x) __attribute__((always_inline));
extern	t_double3	norm(t_double3 x) __attribute__((always_inline));
extern	t_double3	point(t_double3 p,
	t_double3 v, double t) __attribute__((always_inline));
extern	double		len(t_double3 p) __attribute__((always_inline));
extern	double		theta(t_double3 a,
	t_double3 b) __attribute__((always_inline));
extern	t_double3	cross(t_double3 a,
	t_double3 b) __attribute__((always_inline));

/*
** utils/quaternion.c
*/

# define PI_180		(0.0174532925)

extern	t_double4	vec3quat(
	const t_double3 x) __attribute__((always_inline));
extern	t_double4	quat(const t_double3 x,
	const double angle) __attribute__((always_inline));
extern	t_double4	qmul(const t_double4 x,
	const t_double4 n) __attribute__((always_inline));
extern	t_double4	qinv(
	const t_double4 x) __attribute__((always_inline));
extern	t_double3	qrot(
	const t_double4 x, const t_double4 n) __attribute__((always_inline));
extern	t_double4	qconjugate(
	const t_double4 x) __attribute__((always_inline));
extern	double		qnorm(t_double4 x) __attribute__((always_inline));
extern	t_double4	qnp(t_double4 x) __attribute__((always_inline));
extern	double		qround(double x);

/*
** utils/color.c
*/

typedef	struct s_color	t_color;

extern void			setup_color(void);
extern void			update_unit(t_color *color);
extern void			update_raw(t_color *color);
#endif
