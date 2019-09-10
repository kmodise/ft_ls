/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 09:35:41 by kmodise           #+#    #+#             */
/*   Updated: 2019/09/01 16:09:29 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"
#include <string.h>

char				*trimtime(char *s)
{
	int				i;
	char			*str;
	int				k;

	k = 0;
	str = (char *)malloc(sizeof(char) * 12);
	i = 0;
	while (s[i] != '\0')
	{
		if (i < 16)
		{
			str[k] = s[i];
			k++;
		}
		i++;
	}
	str[k] = '\0';
	return (str);
}

char				*file_time(char *file)
{
	struct stat		time;

	stat(file, &time);
	return (ctime(&time.st_mtime));
}

void				tme_sort(char **file)
{
	int				i;
	int				k;
	char			*temp;

	i = -1;
	rev_sort(file);
	while (file[++i] != NULL)
	{
		k = 0;
		while (file[k] != NULL)
		{
			if ((ft_strcmp(trimtime(file_time(file[i])),
							trimtime(file_time(file[k]))) > 0))
			{
				temp = file[i];
				file[i] = file[k];
				file[k] = temp;
			}
			k++;
		}
	}
}
