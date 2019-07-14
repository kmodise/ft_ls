/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 10:00:33 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/16 10:06:25 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*st;

	st = (char *)malloc(sizeof(char) * n + 1);
	if (st == NULL)
		return (NULL);
	st = ft_strncpy(st, s, n);
	st[n] = '\0';
	return (st);
}
