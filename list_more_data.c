/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_other.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 13:50:43 by kmodise           #+#    #+#             */
/*   Updated: 2019/08/11 09:41:57 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void				time_trim(char *s)
{
	int				i;
	char			str[13];
	int				k;

	k = 0;
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

	gr = getgrgid(buff.st_gid);
	pwd = getpwuid(buff.st_uid);
	ft_putchar('\t');
	ft_putstr((char *)pwd->pw_name);
	ft_putchar('\t');
	ft_putstr((char *)gr->gr_name);
	ft_putchar('\t');
	ft_putnbr(buff.st_size);
	ft_putchar('\t');
	time_trim(ctime(&buff.st_mtime));
}

int					more_data(struct stat buff)
{
	user_id(buff);
	return (0);
}
