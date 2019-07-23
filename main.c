/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 09:01:25 by kmodise           #+#    #+#             */
/*   Updated: 2019/07/21 14:59:05 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		main(int argc, char *argv[])
{
	if (argc == 1)
		lst(".");
	else if ((argv[1][0] == '-') && (argv[1][1] == 'l') && (argv[1][2] == 'a'))
	{
		lst_la(".");
	}
	else if ((argv[1][0] == '-') && (argv[1][1] == 'l'))
		lst_l(".");
	else if ((argv[1][0] == '-') && (argv[1][1] == 'a'))
	{
		lst_a(".");
	}
	
	else if (argc == 2)
	{
		lst(argv[1]);
	}
	return (0);
}
