/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 09:56:58 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/12 13:31:11 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*p;

	i = 0;
	p = malloc(size);
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
