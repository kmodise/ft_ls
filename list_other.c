/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_other.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 13:50:43 by kmodise           #+#    #+#             */
/*   Updated: 2019/08/02 14:57:41 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void				tme(char *s)
{
	int				i;
	char			*str;
	int				k;

	k = 0;
	str = (char *)malloc(sizeof(char) * 12);
	i = 0;
	while (s[i] != '\0')
	{
		if (i > 3 && i < 16)
		{
			str[k] = s[i];
			k++;
		}
		i++;
	}
	str[k] = '\0';
	ft_putstr(str);
}

void				user_id(struct stat buff)
{
	struct passwd	*pwd;
	struct group	*gr;
	char			*s;

	s = (char *)malloc(sizeof(char) * 20);
	s = ctime(&buff.st_mtime);
	gr = getgrgid(buff.st_gid);
	pwd = getpwuid(buff.st_uid);
	ft_putchar('\t');
	ft_putstr((char *)pwd->pw_name);
	ft_putchar('\t');
	ft_putstr((char *)gr->gr_name);
	ft_putchar('\t');
	ft_putnbr(buff.st_size);
	ft_putchar('\t');
	tme(s);
}

int					other(struct stat buff)
{
	user_id(buff);
	return (0);
}
