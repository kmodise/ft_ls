/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:02:56 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/02 17:06:24 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*store_s;
	size_t			goku;
	unsigned char	store_c;

	store_c = (unsigned char)c;
	goku = 0;
	store_s = (unsigned char *)s;
	while (goku < n)
	{
		if (store_s[goku] == store_c)
		{
			return ((char *)s + goku);
		}
		goku++;
	}
	return (NULL);
}
