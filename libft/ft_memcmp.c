/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:12:12 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/18 11:58:25 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *left, const void *right, size_t how_long)
{
	char	*s_left;
	char	*s_right;
	size_t	v;

	v = 0;
	s_left = (char *)left;
	s_right = (char *)right;
	while (v < how_long)
	{
		if (s_left[v] != s_right[v])
		{
			return ((unsigned char)s_left[v]
					- (unsigned char)s_right[v]);
		}
		v++;
	}
	return (0);
}
