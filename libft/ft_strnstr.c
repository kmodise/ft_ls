/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 11:08:26 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/11 18:01:32 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** i + search so mouse can be ++ by adding
** search which allways starts at 0 ulike i
*/

#include "libft.h"

char	*ft_strnstr(const char *mouse, const char *cat, size_t how_many)
{
	size_t	search;
	size_t	i;

	i = 0;
	while (mouse[i] && i < how_many)
	{
		search = 0;
		while (cat[search] == mouse[i + search] &&
				cat[search] && search + i < how_many)
		{
			search++;
		}
		if (cat[search] == '\0')
		{
			return ((char *)mouse + i);
		}
		i++;
	}
	if (cat[0] == '\0')
		return ((char *)&mouse[i]);
	return (NULL);
}
