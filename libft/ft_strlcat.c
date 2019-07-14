/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 08:54:19 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/19 15:55:12 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sz;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	sz = size;
	j = -1;
	while (sz-- != 0 && dst[i])
		i++;
	len = i;
	sz = size - i;
	if (sz == 0)
		return (ft_strlen(src) + size);
	while (src[++j])
	{
		if (sz != 1)
		{
			dst[i] = (char)src[j];
			i++;
			sz--;
		}
	}
	dst[i] = '\0';
	return (len + j);
}
