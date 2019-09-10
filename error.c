/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 12:56:54 by kmodise           #+#    #+#             */
/*   Updated: 2019/08/31 15:49:20 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void				null_or_not_alowed(const char *filename)
{
	ft_putstr("can't open \"");
	ft_putstr((char *)filename);
	ft_putendl("\", doesn't exist or not permitted");
	exit(1);
}

void				cant_handle(char *file)
{
	lst(file, 'l', '\0', '0');
	ft_putendl("ft_ls can't handle this operation");
}

void				illegal_option(char *argv)
{
	ft_putstr(argv);
	ft_putendl(" not supported options[altr]");
	exit(1);
}
