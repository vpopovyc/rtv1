/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:33:08 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/25 15:33:10 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/utils.h"

inline	void	update_raw(t_color *color)
{
	(*color).r = ((*color).unit.r > 1.0 ? 1.0 : (*color).unit.r ) * 255;
	(*color).g = ((*color).unit.g > 1.0 ? 1.0 : (*color).unit.g ) * 255;
	(*color).b = ((*color).unit.b > 1.0 ? 1.0 : (*color).unit.b ) * 255;
}

inline	void	update_unit(t_color *color)
{
	(*color).unit.r	= (double)(*color).r / 255;
	(*color).unit.g	= (double)(*color).g / 255;
	(*color).unit.b	= (double)(*color).b / 255;
}

inline	void	setup_color(void)
{
	uint32_t i;

	i = 0;
	while (i < LNUM)
	{
		update_unit(&(g_light[i].color));
		++i;
	}
	i = 0;
	while (i < OBJNUM)
	{
		update_unit(&(g_obj[i].prop.color));
		++i;
	}
}
