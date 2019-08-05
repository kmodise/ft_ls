/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 11:06:43 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/12 13:28:59 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnew(size_t size)
{
	char	*z;
	size_t	i;

	i = 0;
	z = (char *)malloc((size + 1) * sizeof(char));
	if (z == NULL)
	{
		return (NULL);
	}
	while (i <= size)
	{
		z[i] = 0;
		i++;
	}
	return (z);
}
