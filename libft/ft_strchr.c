/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:36:52 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/16 16:39:25 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	int		i;
	int		len;

	len = ft_strlen(s);
	i = 0;
	ch = c;
	while (i < len + 1)
	{
		if (s[i] == ch)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	return (NULL);
}
