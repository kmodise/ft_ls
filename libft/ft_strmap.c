/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 11:28:50 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/17 17:24:24 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*p;
	int		i;

	i = 0;
	p = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (p == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		p[i] = f(s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
