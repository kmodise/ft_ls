/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_l.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 11:23:24 by kmodise           #+#    #+#             */
/*   Updated: 2019/08/31 13:10:43 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void				usr_perm(struct stat buff)
{
	char			*str;

	str = (char *)malloc(sizeof(char) * 3);
	if (str == NULL)
		exit(-1);
	str[0] = (buff.st_mode & S_IRUSR) ? 'r' : '-';
	str[1] = (buff.st_mode & S_IWUSR) ? 'w' : '-';
	str[2] = (buff.st_mode & S_IXUSR) ? 'x' : '-';
	str[3] = '\0';
	ft_putstr(str);
	free(str);
}

void				grp_perm(struct stat buff)
{
	char			*s;

	s = (char *)malloc(sizeof(char) * 3);
	if (s == NULL)
		exit(-1);
	s[0] = (buff.st_mode & S_IRGRP) ? 'r' : '-';
	s[1] = (buff.st_mode & S_IWGRP) ? 'w' : '-';
	s[2] = (buff.st_mode & S_IXGRP) ? 'x' : '-';
	s[3] = '\0';
	ft_putstr(s);
	free(s);
}

void				other_perm(struct stat buff)
{
	char			*s;

	s = (char *)malloc(sizeof(char) * 3);
	if (s == NULL)
		exit(1);
	s[0] = (buff.st_mode & S_IROTH) ? 'r' : '-';
	s[1] = (buff.st_mode & S_IWOTH) ? 'w' : '-';
	s[2] = (buff.st_mode & S_IXOTH) ? 'x' : '-';
	s[3] = '\0';
	ft_putstr(s);
	free(s);
}

void				file_data(char *file, struct stat buff)
{
	char			f_d;

	f_d = S_ISDIR(buff.st_mode) ? 'd' : '-';
	ft_putchar(f_d);
	usr_perm(buff);
	grp_perm(buff);
	other_perm(buff);
	ft_putchar('\t');
	ft_putnbr((buff.st_nlink));
	more_data(buff);
	ft_putchar('\t');
	ft_putstr(file);
}
