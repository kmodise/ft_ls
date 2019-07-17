/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 11:13:15 by kmodise           #+#    #+#             */
/*   Updated: 2019/07/17 14:01:29 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int						lst_a(const char *filename)
{
	DIR					*dir;
	struct dirent		*sd;
	char				**files;
	int					i;

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
	while (files[i] != NULL)
	{
		ft_putstr(files[i]);
		ft_putchar('\t');
		i++;
	}
	ft_putchar('\n');
	free(files);
	return (0);
}
