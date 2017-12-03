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

#include <stdio.h>
#include <stdint.h>

typedef	union	u_test
{
	uint32_t	rgba;
	#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
	struct
	{
		uint8_t	a;
		uint8_t	b;
		uint8_t	g;
		uint8_t	r;
	};
	#else
	struct
	{
		uint8_t	r;
		uint8_t	g;
		uint8_t	b;
		uint8_t	a;
	};
	#endif
}				t_test;

int		main(void)
{
	t_test test;

	test.rgba = 0x0090ac00;
	printf("%x %#.2x %#.2x %#.2x %#.2x %zu\n", test.rgba, test.r, test.g, test.b, test.a, sizeof(t_test));
	return (0);
}
