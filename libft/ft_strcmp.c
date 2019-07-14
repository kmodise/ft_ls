/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:37:16 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/16 16:44:37 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strmp compares null and strnmp doesnt
*/

int		ft_strcmp(const char *s1, const char *s2)
{
	int		d;

	d = 0;
	if ((char)s1[0] == '\0' && (char)s2[0] == '\200')
		return (-1);
	while (s1[d] && s1[d] == s2[d])
	{
		d++;
	}
	return ((const unsigned char)s1[d] -
			(const unsigned char)s2[d]);
}
