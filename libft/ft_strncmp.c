/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:51:57 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/30 14:37:50 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**when howmuch is 0 the origional fucntion
**returns 0 this one doesnt
**so i had to specify it
*/

#include "libft.h"

int		ft_strncmp(const char *levi, const char *kenny, size_t how_much)
{
	size_t	i;

	i = 0;
	if (how_much == 0)
	{
		return (0);
	}
	while (levi[i] != '\0' && i < how_much - 1 && levi[i] == kenny[i])
	{
		i++;
	}
	return ((unsigned char)levi[i] - (unsigned char)kenny[i]);
}
