/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 20:38:39 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/01 20:39:00 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** brief
** module is responsible for reading input from file
** ** it recieves filename of targeted file
** ** reads it
** ** validates read content
** ** saves data to appropriate structures 
*/

#ifndef __PARSE_H
# define __PARSE_H

# include "../libft/libft.h"

/*
** Entry point
** ** filename – is name of targeted file 
*/

int8_t	parse_init(void/*char *filename*/);

#endif
