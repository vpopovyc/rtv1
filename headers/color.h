 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:02:07 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/26 13:02:08 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __COLOR_H
# define __COLOR_H

# include <stdint.h>

typedef	union		u_unitcolor
{
	t_double3		rgb;
# if __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
	struct
	{
		double		r;
		double		g;
		double		b;
	};
# else
	struct
	{
		double		b;
		double		g;
		double		r;
	};
# endif
}					t_unitcolor;

typedef	struct		s_color
{
	t_unitcolor		unit;
	union
	{
		uint32_t	rgba;
# if __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
		struct
		{
			uint8_t	r;
			uint8_t	g;
			uint8_t	b;
			uint8_t	a;
		};
# else
		struct
		{
			uint8_t	a;
			uint8_t	b;
			uint8_t	g;
			uint8_t	r;
		};
# endif
	};
}					t_color;

#endif
