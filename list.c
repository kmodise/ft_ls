/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 17:43:07 by kmodise           #+#    #+#             */
/*   Updated: 2019/08/02 14:52:23 by kmodise          ###   ########.fr       */
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
			ft_putchar('\n');
		}
		i++;
	}
}

void				print_a(char **files)
{
	int				i;

	i = 0;
	while (files[i] != NULL)
	{
		ft_putstr(files[i]);
		ft_putchar('\n');
		i++;
	}
}

int					lst(const char *filename, char f, char sort)
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
	if (sort == 'r')
		rev_sort(files);
	else if (sort == 't')
		tme_sort(files);
	else
		alpha_sort(files);
	if (f == 'a')
		print_a(files);
	else
		print(files);
	free(files);
	return (0);
}
