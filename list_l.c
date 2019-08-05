/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_l.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 09:40:56 by kmodise           #+#    #+#             */
/*   Updated: 2019/07/26 14:38:53 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int					lst_l(const char *filename, char f)
{
	DIR				*dir;
	struct stat		buff;
	struct dirent	*sd;
	char			**files;
	int				i;

	i = 0;
	files = (char **)malloc(sizeof(char) * 4294967295);
	dir = opendir(filename);
	if (dir == NULL)
		return (-1);
	while ((sd = readdir(dir)) != NULL)
		files[i++] = sd->d_name;
	files[i] = NULL;
	i = 0;
	alpha_sort(files);
	if (f == 'a')
	{
		while (stat(files[i], &buff) != -1)
		{
			file_data(files[i], buff);
			ft_putchar('\n');
			i++;
		}
		return (0);
	}
	else
	{
		while (stat(files[i], &buff) != -1)
		{
			if (files[i][0] != '.')
			{
				file_data(files[i], buff);
				ft_putchar('\n');
			}
			i++;
		}
	}
	return (0);
}
