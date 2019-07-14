/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:08:11 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/23 10:11:45 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[len] != '\0')
	{
		dest[i] = src[len];
		len++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
