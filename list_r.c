/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 08:57:08 by kmodise           #+#    #+#             */
/*   Updated: 2019/09/10 10:42:58 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void				file_extention(int i, DIR *dir, char **files)
{
	struct dirent	*sd;

	while ((sd = readdir(dir)) != NULL)
		files[i++] = sd->d_name;
	i = -1;
}

void				extention(char **files)
{
	alpha_sort(files);
	print(files);
}

void				lst_r(const char *dirname)
{
	DIR				*dir;
	char			**files;
	int				i;
	char			*ptr;

	i = 0;
	files = (char **)malloc(sizeof(char *) * 4294967295);
	dir = opendir(dirname);
	if (dir == NULL)
		null_or_not_alowed(dirname);
	file_extention(i, dir, files);
	extention(files);
	while (files[++i] != NULL)
	{
		ptr = path(files[i], (char *)dirname);
		if (is_dir(ptr) && files[i][0] != '.')
		{
			ft_putendl("\n");
			ft_putendl(ptr);
			lst_r(ptr);
		}
		free(ptr);
	}
	free(&files[0]);
	closedir(dir);
}
