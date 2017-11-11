/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_types.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:23:22 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/11 16:23:24 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __VECTOR_TYPES_H
# define __VECTOR_TYPES_H

typedef	int		t_int2		__attribute__((vector_size(sizeof(int)*2)));
typedef	int		t_int3		__attribute__((vector_size(sizeof(int)*3)));
typedef	int		t_int4		__attribute__((vector_size(sizeof(int)*4)));
typedef	double	t_double2	__attribute__((vector_size(sizeof(double)*2)));
typedef	double	t_double3	__attribute__((vector_size(sizeof(double)*3)));
typedef	double	t_double4	__attribute__((vector_size(sizeof(double)*4)));

#endif
