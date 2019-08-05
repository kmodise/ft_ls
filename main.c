/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 09:01:25 by kmodise           #+#    #+#             */
/*   Updated: 2019/08/05 09:33:10 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	norm(char **argv)
{
	if ((argv[1][0] == '-') && (((argv[1][1] == 'l') && (argv[1][2] == 'a')) || ((argv[1][1] == 'a') && (argv[1][2] == 'l'))))
		lst_l(".", 'a');
	else if ((argv[1][0] == '-') && (argv[1][1] == 'l'))
		lst_l(".", '\0');
	else if ((argv[1][0] == '-') && (argv[1][1] == 't'))
		lst(".", '\0', 't');
	else if ((argv[1][0] == '-') && (((argv[1][1] == 'a') && (argv[1][2] == 'r')) || ((argv[1][1] == 'r') && (argv[1][2] == 'a'))))
		lst(".", 'a', 'r');
	else if ((argv[1][0] == '-') && (argv[1][1] == 'a'))
		lst(".", 'a', '\0');
	else if ((argv[1][0] == '-') && (argv[1][1] == 'r'))
		lst(".", '\0', 'r');
	else if ((argv[1][0] == '-') && (argv[1][1] == 'R'))
		lst_r(".");
}

void	file_input(char **argv)
{
	if ((argv[1][0] == '-') && (((argv[1][1] == 'l') && (argv[1][2] == 'a')) || ((argv[1][1] == 'a') && (argv[1][2] == 'l'))))
		lst_l(argv[2], 'a');
	else if ((argv[1][0] == '-') && (argv[1][1] == 'l'))
		lst_l(argv[2], '\0');
	else if ((argv[1][0] == '-') && (argv[1][1] == 't'))
		lst(argv[2], '\0', 't');
	else if ((argv[1][0] == '-') && (((argv[1][1] == 'a') && (argv[1][2] == 'r')) || ((argv[1][1] == 'r') && (argv[1][2] == 'a'))))
		lst(argv[2], 'a', 'r');
	else if ((argv[1][0] == '-') && (argv[1][1] == 'a'))
		lst(argv[2], 'a', '\0');
	else if ((argv[1][0] == '-') && (argv[1][1] == 'r'))
		lst(argv[2], '\0', 'r');
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		lst_r(argv[1]);//lst(argv[1], '\0', '\0');
	/*if (argc == 1)
		lst(".", '\0', '\0');
	else if (argc == 2 && argv[1][0] == '-')
		norm(argv);
	else if (argc == 2 && argv[1][0] != '-')
		lst(argv[1], '\0', '\0');
	else if (argc == 3)
		file_input(argv);
	else
		ft_putstr(argv[1]);*/
}
	/*if (argc == 1)
		lst(".", 'k');
	else if ((argv[1][0] == '-') && (argv[1][1] == 'l') && (argv[1][2] == 'a'))
		lst_la(".");
	else if ((argv[1][0] == '-') && (argv[1][1] == 'l'))
		lst_l(".");
	else if ((argv[1][0] == '-') && (argv[1][1] == 'r'))
		lst(".", 'r');
	else if ((argv[1][0] == '-') && (argv[1][1] == 't'))
		lst(".", 't');
	else if ((argv[1][0] == '-') && (argv[1][1] == 'a') && (argv[1][2] == 'r'))
		lst_a(".", 'r');
	else if ((argv[1][0] == '-') && (argv[1][1] == 'a'))
		lst_a(".", 'k');
	else if (argc == 2)
		lst(argv[1], 'k');
	return (0);*/
/*
		if (argv[1][1] == 'a' || argv[1][2] == '\0')
			lst(".", 'a', '\0');
		else if ((argv[1][1] == 'l' && argv[1][2] == 'a') || (argv[1][1] == 'a' && argv[1][2] == 'l'))
			lst_l(".", 'a');
		else if ((argv[1][1] == 'r' && argv[1][2] == 'a') || (argv[1][1] == 'a' && argv[1][2] == 'r'))
			lst(".", 'a', 'r');
		else if(argv[1][1] == 'l')
			lst_l(".", '\0');
		else if (argv[1][1] == 'r' || argv[1][2] == '\0')
			lst(".", '\0', 'r');
 */
