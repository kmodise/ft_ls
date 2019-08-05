/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 08:57:08 by kmodise           #+#    #+#             */
/*   Updated: 2019/08/04 16:04:55 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void				lst_r(const char *dirname)
{
	DIR				*dir;
	struct dirent	*sd;
	char			**files;
	char			**directory;
	int				i;
	int				k;
	int				len;
	//int				fd;
	struct stat		buff;
	char			f_d;

	i = 0;
	k = 0;
	files = (char **)malloc(sizeof(char) * 4294967295);
	directory = (char **)malloc(sizeof(char) * 4294967295);
	if (files == NULL || directory == NULL)
		exit (1);
	dir = opendir(dirname);
	if (dir == NULL)
		exit(1);
	while ((sd = readdir(dir)) != NULL)
		files[i++] = sd->d_name;
	files[i] = NULL;
	len = i;
	i = 2;
	alpha_sort(files);
	while (len > 0)
	{
		stat(files[i], &buff);
		f_d = S_ISDIR(buff.st_mode) ? 'd' : '-';
		if (f_d == 'd')
		{
			directory[k] = files[i];
			k++;
		}
		i++;
		len--;
	}
	directory[k] = NULL;
	/* k = 0;
	while (directory[k] != NULL)
	{
		if (directory[k][0] != '.')
			lst(directory[k], '\0', '\0');
		k++;
	}*/
	print(files);
	//ft_putchar('\n');
	i = 0;
	while (k > 0)
	{
		ft_putchar('\n');
		ft_putendl(directory[i]);
		if (directory[i][0] != '.')
		{
			lst(directory[i++], '\0', '\0');
			lst_r(directory[i]);
		}
		i++;
		k--;
	}
	//ft_putchar('T');
}
