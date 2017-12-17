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
	// 		.o = (t_double3){180.0, 200.0, -80.0},
	// 	},
	// 	.prop = {
	// 		.color = {
	// 			.rgba = 0xff0f0f00
	// 		},
	// 		.radius = 42.0,
	// 		.diffuse = (t_double3){0.3, 0.3, 0.3},
	// 		.ambient = (t_double3){0.5, 0.5, 0.5},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = sphere_inter,
	// 	.normal = sphere_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, -50.0, 0.0},
	// 		.v = (t_double3){1.0, 0.0, 0.0}
	// 	},
	// 	.prop = {
	// 		.color = {
	// 			.rgba = 0x02028200
	// 		},
	// 		.radius = 20.0,
	// 		.diffuse = (t_double3){0.9, 0.9, 0.9},
	// 		.ambient = (t_double3){0.7, 0.7, 0.7},
	// 		.specular = (t_double3){0.6, 0.6, 0.6}
	// 	},
	// 	.intersect_me = cylinder_inter,
	// 	.normal = cylinder_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, 242.0, 0.0},
	// 		.v = (t_double3){0.0, 0.0, 1.0}
	// 	},
	// 	.prop = {
	// 		.color = {
	// 			.rgba = 0x82020200
	// 		},
	// 		.radius = 35.0,
	// 		.diffuse = (t_double3){0.3, 0.3, 0.3},
	// 		.ambient = (t_double3){0.5, 0.5, 0.5},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = cylinder_inter,
	// 	.normal = cylinder_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, 0.0, 0.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0}
	// 	},
	// 	.prop = {
	// 		.color = {
	// 			.rgba = 0x02820200
	// 		},
	// 		.radius = 50.0,
	// 		.diffuse = (t_double3){0.3, 0.3, 0.3},
	// 		.ambient = (t_double3){0.5, 0.5, 0.5},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = cylinder_inter,
	// 	.normal = cylinder_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){100.0, 100.0, 400.0},
	// 		.v = (t_double3){1.0, 0.0, 0.0}
	// 	},
	// 	.prop = {
	// 		.color = {
	// 			.rgba = 0xf8d74900
	// 		},
	// 		.radius = 14.0,
	// 		.diffuse = (t_double3){0.3, 0.3, 0.3},
	// 		.ambient = (t_double3){0.5, 0.5, 0.5},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = cylinder_inter,
	// 	.normal = cylinder_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){420.0, 0.0, 200.0},
	// 		.v = (t_double3){0.0, 1.0, 0.0}
	// 	},
	// 	.prop = {
	// 		.color = {
	// 			.rgba = 0xe7614e00
	// 		},
	// 		.radius = 30.0,
	// 		.diffuse = (t_double3){0.3, 0.3, 0.3},
	// 		.ambient = (t_double3){0.5, 0.5, 0.5},
	// 		.specular = (t_double3){0.9, 0.9, 0.9}
	// 	},
	// 	.intersect_me = cylinder_inter,
	// 	.normal = cylinder_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, 0.0, 0.0},
	// 		.n = (t_double3){-1.0, 0.0, 0.0}
	// 	},
	// 	.prop = {
	// 		.color = {
	// 			.rgba = 0xacacac00
	// 		},
	// 		.diffuse = (t_double3){0.7, 0.7, 0.7},
	// 		.ambient = (t_double3){0.7, 0.7, 0.7},
	// 		.specular = (t_double3){0.5, 0.5, 0.5}
	// 	},
	// 	.intersect_me = plane_inter,
	// 	.normal = plane_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, 0.0, -250.0},
	// 		.n = (t_double3){0.0, 0.0, -1.0}
	// 	},
	// 	.prop = {
	// 		.color = {
	// 			.rgba = 0x77c3cf00
	// 		},
	// 		.diffuse = (t_double3){0.8, 0.8, 0.8},
	// 		.ambient = (t_double3){0.7, 0.7, 0.7},
	// 		.specular = (t_double3){0.2, 0.2, 0.2}
	// 	},
	// 	.intersect_me = plane_inter,
	// 	.normal = plane_normal
	// },
	// {
	// 	.lcs = {
	// 		.o = (t_double3){0.0, -200.0, 0.0},
	// 		.n = (t_double3){0.0, -1.0, 0.0}
	// 	},
	// 	.prop = {
	// 		.color = {
	// 			.rgba = 0xd3b3eb00
	// 		},
	// 		.diffuse = (t_double3){0.8, 0.8, 0.8},
	// 		.ambient = (t_double3){0.7, 0.7, 0.7},
	// 		.specular = (t_double3){0.2, 0.2, 0.2}
	// 	},
	// 	.intersect_me = plane_inter,
	// 	.normal = plane_normal
	// },
	{
		.lcs = {
			.o = (t_double3){0.0, 0.0, 0.0},
			.v = (t_double3){0.0, 1.0, 0.0}
		},
		.prop = {
			.color = {
				.rgba = 0x4447A400
			},
			.a_theta = (22.5 * PI_180),
			.diffuse = (t_double3){0.1, 0.1, 0.1},
			.ambient = (t_double3){0.7, 0.7, 0.7},
			.specular = (t_double3){0.9, 0.9, 0.9}
		},
		.intersect_me = cone_inter,
		.normal = cone_normal
	},
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
