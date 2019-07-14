/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:31:42 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/11 17:44:39 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *mouse, const char *cat)
{
	int		i;
	int		l;

	i = 0;
	l = 0;
	if (cat[l] == '\0')
	{
		return ((char *)&mouse[i]);
	}
	while (mouse[i])
	{
		while (mouse[i + l] == cat[l] && cat[l])
		{
			l++;
		}
		if (cat[l] == '\0')
		{
			return ((char *)&mouse[i]);
		}
		l = 0;
		i++;
	}
	return (NULL);
}
