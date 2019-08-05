/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:56:02 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/05 10:59:34 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		bgn;
	int		end;
	int		len;
	int		l;
	char	*dd;

	bgn = ft_nofspc(s);
	end = 1;
	l = 0;
	len = (int)ft_strlen(s);
	while (s[len - end] == ' ' || s[len - end] == '\n' || s[len - end] == '\t')
		end++;
	len = len - bgn - end + 1;
	if (len <= 0)
		len = 0;
	dd = (char *)malloc((len + 1) * sizeof(char));
	if (dd == NULL)
		return (NULL);
	while (l < len)
	{
		dd[l] = s[bgn + l];
		l++;
	}
	dd[l] = '\0';
	return (dd);
}
