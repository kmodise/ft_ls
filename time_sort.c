/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 09:35:41 by kmodise           #+#    #+#             */
/*   Updated: 2019/08/03 10:58:41 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void			tme_sort(char **file)
{
	int			i;
	int			k;
	char		*temp;
	long			**time;
	long			*temp_time;
	struct stat buff;
	//int			st;
	int			end;
	//int			str = 0;

	time = (long **)malloc(sizeof(long) * 4294967295);
	temp = (char *)malloc(sizeof(char) * 255);
	temp_time = (long *)malloc(sizeof(long) * 255);
	i = 0;
	while (stat(file[i], &buff) != -1)
	{
		time[i] = (long *)buff.st_mtimespec.tv_sec;
		i++;
	}
	end = i;
	i = 0;
	//while (str < end)
	//{
		while (end)
		{
			k = i + 1;
			while (file[k] != NULL)
			{
				if (time[i] < time[k])
				{
					temp_time = time[i];
					time[i] = time[k];
					time[k] = temp_time;
					ft_strcpy(temp, file[i]);
					ft_strcpy(file[i], file[k]);
					ft_strcpy(file[k], temp);
				}
				k++;
			}
			i++;
			end--;
		}
	//	i = 0; abvddfrf	r
	//	str++;
	//}
}
