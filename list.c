/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 17:43:07 by kmodise           #+#    #+#             */
/*   Updated: 2019/08/31 13:08:47 by kmodise          ###   ########.fr       */
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

void				option_sort(char **files, char sort)
{
	if (sort == 'r')
		rev_sort(files);
	else if (sort == 't')
		tme_sort(files);
	else
		alpha_sort(files);
}

void				option_display(char **files, char f)
{
	if (f == 'a')
		print_a(files);
	else
		print(files);
}

void				lst(const char *filename, char flag, char sort, char k)
{
	DIR				*dir;
	char			**files;
	int				i;

	i = 0;
	files = (char **)malloc(sizeof(char *) * 4294967295);
	if (is_dir((char *)filename))
	{
		dir = opendir(filename);
		if (dir == NULL)
			null_or_not_alowed(filename);
		lst_extention(i, dir, files);
		option_sort(files, sort);
		if (flag == 'l')
			fr_l(k, files);
		else
			option_display(files, flag);
		closedir(dir);
	}
	else if (regfile(filename))
		other_stuff(files, filename, flag, k);
	else
		null_or_not_alowed(filename);
	free(&files[0]);
}
