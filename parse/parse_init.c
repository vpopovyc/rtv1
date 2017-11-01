/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 20:43:30 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/11/01 20:43:32 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/parse.h"

/*
** Saves info to singleton of objects
** ** info – line of data splitted by delim
*/

void	save_info(void /*char **info*/)
{
	printf("Save info to singleton of objects\n");
}

/*
** Validates content that was read
** ** info – line of data splitted by delim
*/

void	validate_info(void/*char **info*/)
{
	printf("Validated line info\n");
	save_info();
}

/*
** Reads content of file, line after line
** ** fd – filedesriptor attached to file
*/

void	parse_file(void/*int fd*/)
{
	printf("Parsing file\n");
	printf("Get line of data from file\n");
	validate_info();
}

/*
** Entry point
*/

int8_t	parse_init(void/*char *filename*/)
{
	printf("Start parsing\n");
	printf("Opened fd\n");
	parse_file();
	return (1);
}
