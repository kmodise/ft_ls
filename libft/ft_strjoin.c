/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 13:14:46 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/17 10:47:34 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joint;
	int		i;
	int		k;
	int		len1;
	int		len2;

	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	i = -1;
	k = 0;
	joint = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (joint == NULL)
		return (NULL);
	while (++i < len1 + len2)
	{
		if (i < len1)
			joint[i] = (char)s1[i];
		else
		{
			joint[i] = (char)s2[k];
			k++;
		}
	}
	joint[i] = '\0';
	return (joint);
}
