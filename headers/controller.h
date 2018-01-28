/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controller.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 17:17:07 by vpopovyc          #+#    #+#             */
/*   Updated: 2018/01/28 17:17:08 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTROLLER_H
# define __CONTROLLER_H

# include "core.h"
# include <stdbool.h>

void	update_view(void);
void	move_eye(t_ray dir);
void	rotate_eye(t_ray axis, double angle);
void	rotate_object(int obj_i, t_ray axis, double angle);
void	move_object(int obj_i, t_ray dir);

extern _Bool g_key_pressed;

#endif
