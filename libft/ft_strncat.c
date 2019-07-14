/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 08:22:52 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/13 13:47:47 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	stop;
	size_t	len;
	size_t	i;

	stop = 0;
	len = 0;
	i = 0;
	while (dest[len])
	{
		len++;
	}
	while (stop < n && src[i])
	{
		dest[len] = src[i];
		len++;
		stop++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
