/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 13:45:14 by kmodise           #+#    #+#             */
/*   Updated: 2019/07/26 14:26:49 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void		alpha_sort(char **file)
{
	int		i;
	int		k;
	char	*temp;

	temp = (char *)malloc(sizeof(char) * 255);
	i = 0;
	while (file[i] != NULL)
	{
		k = i + 1;
		while (file[k] != NULL)
		{
			if (ft_strcmp(file[i], file[k]) > 0)
			{
				ft_strcpy(temp, file[i]);
				ft_strcpy(file[i], file[k]);
				ft_strcpy(file[k], temp);
			}
			k++;
		}
		i++;
	}
	free(temp);
}
