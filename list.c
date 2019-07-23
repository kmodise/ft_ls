/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:45:21 by kmodise           #+#    #+#             */
/*   Updated: 2019/07/23 13:53:20 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char			*usr_perm(struct stat buff)
{
	char			*str;

	str = (char *)malloc(sizeof(char) * 3);
	if (str == NULL)
		return (NULL);
	str[0] = (buff.st_mode & S_IRUSR) ? 'r' : '-';
	str[1] = (buff.st_mode & S_IWUSR) ? 'w' : '-';
	str[2] = (buff.st_mode & S_IXUSR) ? 'x' : '-';
	str[3] = '\0';
	return (str);
}

char			*grp_perm(struct stat buff)
{
	char			*s;

	s = (char *)malloc(sizeof(char) * 3);
	if (s == NULL)
		return (NULL);
	s[0] = (buff.st_mode & S_IRGRP) ? 'r' : '-';
	s[1] = (buff.st_mode & S_IWGRP) ? 'w' : '-';
	s[2] = (buff.st_mode & S_IXGRP) ? 'x' : '-';
	s[3] = '\0';
	return (s);
}

char			*other_perm(struct stat buff)
{
	char			*s;

	s = (char *)malloc(sizeof(char) * 3);
	if (s == NULL)
		return (NULL);
	s[0] = (buff.st_mode & S_IROTH) ? 'r' : '-';
	s[1] = (buff.st_mode & S_IWOTH) ? 'w' : '-';
	s[2] = (buff.st_mode & S_IXOTH) ? 'x' : '-';
	s[3] = '\0';
	return (s);
}

void			file_data(char *file, struct stat buff)
{
	char			f_d;
	char			*perm_usr;
	char			*perm_grp;
	char			*perm_other;

	perm_usr = (char *)malloc(sizeof(char) * 3);
	perm_grp = (char *)malloc(sizeof(char) * 3);
	perm_other = (char *)malloc(sizeof(char) * 3);
	if ((perm_usr == NULL) || (perm_grp == NULL) || (perm_other == NULL))
		exit(1);
	f_d = S_ISDIR(buff.st_mode) ? 'd' : '-';
	perm_usr = usr_perm(buff);
	perm_grp = grp_perm(buff);
	perm_other = other_perm(buff);
	ft_putchar(f_d);
	ft_putstr(perm_usr);
	ft_putstr(perm_grp);
	ft_putstr(perm_other);
	ft_putchar('\t');
	ft_putnbr((buff.st_nlink));
	other(buff);
	ft_putchar('\t');
	ft_putstr(file);
}
