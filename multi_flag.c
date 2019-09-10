/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multi_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 11:28:53 by kmodise           #+#    #+#             */
/*   Updated: 2019/08/31 14:08:33 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"
#include <stdio.h>

void		multi_flags(char **argv)
{
	int		i;
	char	sort;
	char	flag;
	char	display;

	i = 1;
	sort = 'z';
	flag = 'z';
	display = 'z';
	while (argv[i] != NULL && argv[i][0] == '-')
	{
		if (argv[i][1] == 'l')
			flag = 'l';
		else if (argv[i][1] == 'a')
			display = 'a';
		else if (argv[i][1] == 'r')
			sort = 'r';
		else if (argv[i][1] == 't')
			sort = 't';
		else
			illegal_option(argv[i]);
		i++;
	}
	fatality(argv[i], flag, sort, display);
}

void		fatality(char *argv, char flag, char sort, char display)
{
	is_dir(argv);
	if (flag == 'l' && display == 'a')
		lst(".", 'l', '\0', '1');
	else if (flag == 'l' && sort == 't')
		lst(".", 'l', 't', '0');
	else if (flag == 'l' && sort == 't' && display == 'a')
		lst(".", 'l', 't', '1');
	else if (flag == 'l' && sort == 'r')
		lst(".", 'l', 'r', '0');
	else if (flag == 'l' && sort == 'r' && display == 'a')
		lst(".", 'l', 'r', '1');
	else if (sort == 'r' && display == 'a')
		lst(".", 'a', 'r', '0');
	else if (sort == 't' && display == 'a')
		lst(".", 'a', 't', '0');
}
