/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_l.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:45:57 by kmodise           #+#    #+#             */
/*   Updated: 2019/07/23 13:55:27 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int					lst_l(const char *filename)
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
	while (stat(files[i], &buff) != -1)
	{
		if (files[i][0] != '.')
		{
			file_data(files[i], buff);
			ft_putchar('\n');
		}
		i++;
	}
	return (0);
}
