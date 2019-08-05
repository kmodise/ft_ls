/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 12:44:01 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/02 13:13:01 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)malloc((len + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		p[i] = (char)s[i + start];
		i++;
	}
	p[i] = '\0';
	return (p);
}
