/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 12:11:03 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/17 10:40:26 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			how_many_dig(int n)
{
	int				k;

	k = 0;
	if (n <= 0)
	{
		k++;
	}
	while (n != 0)
	{
		n = n / 10;
		k++;
	}
	return (k);
}

char				*ft_itoa(int n)
{
	char			*s;
	int				no_d;
	int				i;
	unsigned int	n_clone;

	i = 0;
	no_d = how_many_dig(n);
	n_clone = (unsigned int)n;
	s = (char *)malloc((no_d + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	s[no_d] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		n_clone = n_clone * -1;
		i++;
	}
	while (i < no_d)
	{
		no_d--;
		s[no_d] = n_clone % 10 + 48;
		n_clone = n_clone / 10;
	}
	return (s);
}
