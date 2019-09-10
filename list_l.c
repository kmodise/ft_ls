/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_l.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 09:40:56 by kmodise           #+#    #+#             */
/*   Updated: 2019/08/12 11:29:42 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int					lst_l(char **files, char f)
{
	struct stat		buff;
	int				i;

	i = -1;
	if (f == 'a')
	{
		while (stat(files[++i], &buff) != -1)
		{
			file_data(files[i], buff);
			ft_putchar('\n');
		}
		return (0);
	}
	else
	{
		while (stat(files[++i], &buff) != -1)
		{
			if (files[i][0] != '.')
			{
				file_data(files[i], buff);
				ft_putchar('\n');
			}
		}
	}
	return (0);
}
