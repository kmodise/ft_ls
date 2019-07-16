/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 17:43:07 by kmodise           #+#    #+#             */
/*   Updated: 2019/07/16 10:34:30 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void				print(char **files)
{
	int				i;

	i = 0;
	while (files[i] != NULL)
	{
		if (files[i][0] != '.')
		{
			ft_putstr(files[i]);
			ft_putchar('\t');
		}
		i++;
	}
}

int					lst(const char *filename)
{
	DIR				*dir;
	struct dirent	*sd;
	char			**files;
	int				i;

	i = 0;
	files = (char **)malloc(sizeof(char) * 4294967295);
	if (files == NULL)
		return (-1);
	dir = opendir(filename);
	if (dir == NULL)
		exit(1);
	while ((sd = readdir(dir)) != NULL)
		files[i++] = sd->d_name;
	files[i] = NULL;
	i = 0;
	print(files);
	ft_putchar('\n');
	free(files);
	return (0);
}
