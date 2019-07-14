/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:31:57 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/03 14:02:25 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*stain;

	i = 0;
	len = ft_strlen(s);
	stain = (char *)malloc(len + 1 * sizeof(char));
	if (stain == NULL)
	{
		return (stain);
	}
	while (s[i] != '\0')
	{
		stain[i] = (char)s[i];
		i++;
	}
	stain[i] = '\0';
	return (stain);
}
