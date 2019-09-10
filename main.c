/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 09:01:25 by kmodise           #+#    #+#             */
/*   Updated: 2019/09/01 10:46:42 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	just_ls_nd_flag(char **argv)
{
	if ((argv[1][0] == '-') && ((argv[1][1] == 'l' && argv[1][2] == 'a')
				|| (argv[1][1] == 'a' && argv[1][2] == 'l')))
		lst(".", 'l', '\0', '1');
	else if ((argv[1][0] == '-') && ((argv[1][1] == 'l' && argv[1][2] == 'r')
				|| (argv[1][1] == 'r' && argv[1][2] == 'l')))
		lst(".", 'l', 'r', '0');
	else if ((argv[1][0] == '-') && ((argv[1][1] == 'l' && argv[1][2] == 't')
				|| (argv[1][1] == 't' && argv[1][2] == 'l')))
		lst(".", 'l', 't', '0');
	else if ((argv[1][0] == '-') && (argv[1][1] == 'l'))
		lst(".", 'l', '\0', '0');
	else if ((argv[1][0] == '-') && (argv[1][1] == 't'))
		lst(".", '\0', 't', '0');
	else if ((argv[1][0] == '-') && ((argv[1][1] == 'a' && argv[1][2] == 'r')
				|| (argv[1][1] == 'r' && argv[1][2] == 'a')))
		lst(".", 'a', 'r', '0');
	else if ((argv[1][0] == '-') && (argv[1][1] == 'a'))
		lst(".", 'a', '\0', '0');
	else if ((argv[1][0] == '-') && (argv[1][1] == 'r'))
		lst(".", '\0', 'r', '0');
	else if ((argv[1][0] == '-') && (argv[1][1] == 'R'))
		lst_r(".");
	else
		ft_putendl("illegal option\nusage: ft_ls [-aRtrl] [file ...]");
}

void	file_input(char **argv)
{
	if ((argv[1][0] == '-') && ((argv[1][1] == 'l' && argv[1][2] == 'a')
				|| (argv[1][1] == 'a' && argv[1][2] == 'l')))
		cant_handle(argv[2]);
	else if ((argv[1][0] == '-') && ((argv[1][1] == 'l' && argv[1][2] == 'r')
				|| (argv[1][1] == 'r' && argv[1][2] == 'l')))
		cant_handle(argv[2]);
	else if ((argv[1][0] == '-') && ((argv[1][1] == 'l' && argv[1][2] == 't')
				|| (argv[1][1] == 't' && argv[1][2] == 'l')))
		cant_handle(argv[2]);
	else if ((argv[1][0] == '-') && (argv[1][1] == 'l'))
		cant_handle(argv[2]);
	else if ((argv[1][0] == '-') && (argv[1][1] == 't'))
		lst(argv[2], '\0', 't', '0');
	else if ((argv[1][0] == '-') && ((argv[1][1] == 'a' && argv[1][2] == 'r')
				|| (argv[1][1] == 'r' && argv[1][2] == 'a')))
		lst(argv[2], 'a', 'r', '0');
	else if ((argv[1][0] == '-') && (argv[1][1] == 'a'))
		lst(argv[2], 'a', '\0', '0');
	else if ((argv[1][0] == '-') && (argv[1][1] == 'r'))
		lst(argv[2], '\0', 'r', '0');
	else if ((argv[1][0] == '-') && (argv[1][1] == 'R'))
		lst_r(argv[2]);
	else
		ft_putendl("illegal option\nusage: ft_ls [-aRtrl] [file ...]");
}

void	multiple_files(char **argv, int i)
{
	while (argv[++i] != NULL)
	{
		if ((argv[1][0] == '-') && ((argv[1][1] == 'l' && argv[1][2] == 'a')
					|| (argv[1][1] == 'a' && argv[1][2] == 'l')))
			lst(argv[i], 'l', '\0', '1');
		else if ((argv[1][0] == '-') && (argv[1][1] == 'l'))
			lst(argv[i], 'l', '\0', '0');
		else if ((argv[1][0] == '-') && (argv[1][1] == 't'))
			lst(argv[i], '\0', 't', '0');
		else if ((argv[1][0] == '-') && ((argv[1][1] == 'a' && argv[1][2]
						== 'r') || (argv[1][1] == 'r' && argv[1][2] == 'a')))
			lst(argv[i], 'a', 'r', '0');
		else if ((argv[1][0] == '-') && (argv[1][1] == 'a'))
			lst(argv[i], 'a', '\0', '0');
		else if ((argv[1][0] == '-') && (argv[1][1] == 'r'))
			lst(argv[i], '\0', 'r', '0');
		else if ((argv[1][0] == '-') && (argv[1][1] == 'R'))
			lst_r(argv[i]);
		else if ((argv[1][0] == '-') && ((argv[1][1] == 'l' && argv[1][2] ==
						'r') || (argv[1][1] == 'r' && argv[1][2] == 'l')))
			lst(argv[i], 'l', 'r', '1');
		else
			ft_putendl("illegal option\nusage: ft_ls [-aRtrl] [file ...]");
	}
}

void	ls_and_multiple_f(char **argv)
{
	int	i;

	i = 0;
	while (argv[++i])
	{
		if (is_dir(argv[i]))
		{
			ft_putchar('\n');
			ft_putendl(argv[i]);
			lst(argv[i], '\0', '\0', '0');
		}
		else
		{
			ft_putstr("can't open \"");
			ft_putstr(argv[i]);
			ft_putendl("\", doesn't exist or not permitted");
		}
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		lst(".", '\0', '\0', '0');
	else if (argc == 2 && argv[1][0] != '-')
		lst(argv[1], '\0', '\0', '0');
	else if (argc == 2 && argv[1][0] == '-')
		just_ls_nd_flag(argv);
	else if (argv[2][0] == '-' && argv[1][0] == '-')
		multi_flags(argv);
	else if (argc == 2 && argv[1][0] != '-')
		ls_and_multiple_f(argv);
	else if (argc == 3 && argv[1][0] == '-')
		file_input(argv);
	else if (argc > 3 && argv[1][0] == '-')
		multiple_files(argv, 1);
	else if (argc >= 3 && argv[1][0] != '-')
		ls_and_multiple_f(argv);
	return (0);
}
