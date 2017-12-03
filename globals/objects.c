/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   objects.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 21:20:24 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/01 21:20:26 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/core.h"

/*
** TBD
*/

t_object	g_obj[OBJNUM] =
{
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, 0.0, 0.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.color = {
	// 			.rgba = 0x82020200
	// 		},
	// 		.radius = 42.0,
	// 		.diffuse = (t_double3){0.3, 0.3, 0.3},
	// 		.ambient = (t_double3){0.5, 0.5, 0.5},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	{
		.lcs = {
			.o = (t_double3){0.0, 0.0, 0.0},
			.u = (t_double3){1.0, 0.0, 0.0},
			.v = (t_double3){0.0, 1.0, 0.0},
			.n = (t_double3){0.0, 0.0, 1.0}
		},
		.prop = {
			.color = {
				.rgba = 0x82020200
			},
			.radius = 30.0,
			.diffuse = (t_double3){0.3, 0.3, 0.3},
			.ambient = (t_double3){0.5, 0.5, 0.5},
			.specular = (t_double3){0.9, 0.9, 0.9}
		},
		.intersect_me = sphere_inter,
		.normal = sphere_normal
	}
	// {
	// 	.lcs = {
	// 		.o = (t_double3){100.0, 0.0, 0.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.color = {
	// 			.rgba = 0x82020200
	// 		},
	// 		.radius = 2.0,
	// 		.diffuse = (t_double3){0.3, 0.3, 0.3},
	// 		.ambient = (t_double3){0.5, 0.5, 0.5},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){75.0, 0.0, 0.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.color = {
	// 			.rgba = 0x82020200
	// 		},
	// 		.radius = 3.0,
	// 		.diffuse = (t_double3){0.3, 0.3, 0.3},
	// 		.ambient = (t_double3){0.5, 0.5, 0.5},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){50.0, 0.0, 0.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.color = {
	// 			.rgba = 0x82020200
	// 		},
	// 		.radius = 4.0,
	// 		.diffuse = (t_double3){0.3, 0.3, 0.3},
	// 		.ambient = (t_double3){0.5, 0.5, 0.5},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){25.0, 0.0, 0.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.color = {
	// 			.rgba = 0x82020200
	// 		},
	// 		.radius = 4.5,
	// 		.diffuse = (t_double3){0.3, 0.3, 0.3},
	// 		.ambient = (t_double3){0.5, 0.5, 0.5},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, 0.0, 0.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.color = {
	// 			.rgba = 0x4447A400
	// 		},
	// 		.radius = 5.0,
	// 		.diffuse = (t_double3){0.1, 0.1, 0.1},
	// 		.ambient = (t_double3){0.7, 0.7, 0.7},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){-25.0, 0.0, 0.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.color = {
	// 			.rgba = 0x82020200
	// 		},
	// 		.radius = 5.5,
	// 		.diffuse = (t_double3){0.3, 0.3, 0.3},
	// 		.ambient = (t_double3){0.5, 0.5, 0.5},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){-50.0, 0.0, 0.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.color = {
	// 			.rgba = 0x82020200
	// 		},
	// 		.radius = 6.0,
	// 		.diffuse = (t_double3){0.3, 0.3, 0.3},
	// 		.ambient = (t_double3){0.5, 0.5, 0.5},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){-75.0, 0.0, 0.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.color = {
	// 			.rgba = 0x82020200
	// 		},
	// 		.radius = 7.0,
	// 		.diffuse = (t_double3){0.3, 0.3, 0.3},
	// 		.ambient = (t_double3){0.5, 0.5, 0.5},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){-100.0, 0.0, 0.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.radius = 8.0,
	// 		.color = {
	// 			.rgba = 0x82020200
	// 		},
	// 		.diffuse = (t_double3){0.1, 0.1, 0.1},
	// 		.ambient = (t_double3){0.7, 0.7, 0.7},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, 100.0, 0.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.radius = 2.0,
	// 		.color = {
	// 			.rgba = 0xfca3af00
	// 		},
	// 		.diffuse = (t_double3){0.1, 0.1, 0.1},
	// 		.ambient = (t_double3){0.7, 0.7, 0.7},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, 75.0, 0.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.radius = 3.0,
	// 		.color = {
	// 			.rgba = 0xfca3af00
	// 		},
	// 		.diffuse = (t_double3){0.1, 0.1, 0.1},
	// 		.ambient = (t_double3){0.7, 0.7, 0.7},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, 50.0, 0.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.radius = 4.0,
	// 		.color = {
	// 			.rgba = 0xfca3af00
	// 		},
	// 		.diffuse = (t_double3){0.1, 0.1, 0.1},
	// 		.ambient = (t_double3){0.7, 0.7, 0.7},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, 25.0, 0.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.radius = 4.5,
	// 		.color = {
	// 			.rgba = 0xfca3af00
	// 		},
	// 		.diffuse = (t_double3){0.1, 0.1, 0.1},
	// 		.ambient = (t_double3){0.7, 0.7, 0.7},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, -25.0, 0.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.radius = 5.5,
	// 		.color = {
	// 			.rgba = 0xfca3af00
	// 		},
	// 		.diffuse = (t_double3){0.1, 0.1, 0.1},
	// 		.ambient = (t_double3){0.7, 0.7, 0.7},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, -50.0, 0.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.radius = 6.0,
	// 		.color = {
	// 			.rgba = 0xfca3af00
	// 		},
	// 		.diffuse = (t_double3){0.1, 0.1, 0.1},
	// 		.ambient = (t_double3){0.7, 0.7, 0.7},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, -75.0, 0.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.radius = 7.0,
	// 		.color = {
	// 			.rgba = 0xfca3af00
	// 		},
	// 		.diffuse = (t_double3){0.1, 0.1, 0.1},
	// 		.ambient = (t_double3){0.7, 0.7, 0.7},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, -100.0, 0.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.radius = 8.0,
	// 		.color = {
	// 			.rgba = 0xfca3af00
	// 		},
	// 		.diffuse = (t_double3){0.1, 0.1, 0.1},
	// 		.ambient = (t_double3){0.7, 0.7, 0.7},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, 0.0, 100.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.radius = 2.0,
	// 		.color = {
	// 			.rgba = 0x02028200
	// 		},
	// 		.diffuse = (t_double3){0.1, 0.1, 0.1},
	// 		.ambient = (t_double3){0.7, 0.7, 0.7},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, 0.0, 75.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.radius = 3.0,
	// 		.color = {
	// 			.rgba = 0x02028200
	// 		},
	// 		.diffuse = (t_double3){0.1, 0.1, 0.1},
	// 		.ambient = (t_double3){0.7, 0.7, 0.7},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, 0.0, 50.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.radius = 4.0,
	// 		.color = {
	// 			.rgba = 0x02028200
	// 		},
	// 		.diffuse = (t_double3){0.1, 0.1, 0.1},
	// 		.ambient = (t_double3){0.7, 0.7, 0.7},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, 0.0, 25.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.radius = 4.5,
	// 		.color = {
	// 			.rgba = 0x02028200
	// 		},
	// 		.diffuse = (t_double3){0.1, 0.1, 0.1},
	// 		.ambient = (t_double3){0.7, 0.7, 0.7},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, 0.0, -25.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.radius = 5.5,
	// 		.color = {
	// 			.rgba = 0x02028200
	// 		},
	// 		.diffuse = (t_double3){0.1, 0.1, 0.1},
	// 		.ambient = (t_double3){0.7, 0.7, 0.7},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, 0.0, -50.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.radius = 6.0,
	// 		.color = {
	// 			.rgba = 0x02028200
	// 		},
	// 		.diffuse = (t_double3){0.1, 0.1, 0.1},
	// 		.ambient = (t_double3){0.7, 0.7, 0.7},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, 0.0, -75.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.radius = 7.0,
	// 		.color = {
	// 			.rgba = 0x02028200
	// 		},
	// 		.diffuse = (t_double3){0.1, 0.1, 0.1},
	// 		.ambient = (t_double3){0.7, 0.7, 0.7},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, 0.0, -100.0},
	// 		.u = (t_double3){1.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0},
	// 		.n = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.radius = 8.0,
	// 		.color = {
	// 			.rgba = 0x02028200
	// 		},
	// 		.diffuse = (t_double3){0.1, 0.1, 0.1},
	// 		.ambient = (t_double3){0.7, 0.7, 0.7},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// }
};
