/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 15:01:53 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/02 16:13:34 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**&
*/

#include "libft.h"

void	*ft_memccpy(void *paste, const void *copy, int c, size_t n)
{
	unsigned char	*ptrpaste;
	unsigned char	*ptrcopy;
	size_t			u;
	unsigned char	cc;

	u = 0;
	ptrpaste = (unsigned char *)paste;
	ptrcopy = (unsigned char *)copy;
	cc = (unsigned char)c;
	while (u < n)
	{
		ptrpaste[u] = ptrcopy[u];
		if (ptrcopy[u] == cc)
		{
			return (&ptrpaste[u + 1]);
		}
		u++;
	}
	return (NULL);
}
