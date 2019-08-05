/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 13:58:16 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/17 10:42:29 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_wrds(char const *s, char c)
{
	int			wrds;
	int			i;

	i = 0;
	wrds = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			i++;
		}
		if (s[i] != '\0')
		{
			wrds++;
		}
		while (s[i] && s[i] != c)
		{
			i++;
		}
	}
	return (wrds);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**st;
	int			i;
	int			cut;
	int			nxt;

	i = 0;
	nxt = 0;
	st = (char **)malloc(sizeof(char *) * (ft_wrds(s, c)) + 1);
	if (st == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		cut = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > cut)
		{
			st[nxt] = ft_strndup((s + cut), (i - cut));
			nxt++;
		}
	}
	st[nxt] = NULL;
	return (st);
}
