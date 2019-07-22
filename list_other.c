/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_other.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 13:50:43 by kmodise           #+#    #+#             */
/*   Updated: 2019/07/22 15:10:08 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"
#include <grp.h>
void				user_id(struct stat buff)
{
	struct passwd	*pwd;
    struct group    *gr;

    gr = getgrgid(buff.st_gid);
	pwd = getpwuid(buff.st_uid);
	ft_putchar(' ');
	ft_putstr((char *)pwd->pw_name);
    ft_putchar(' ');
    ft_putstr((char *)gr->gr_name);
}

int                 other(struct stat buff)
{
    user_id(buff);
    return (0);
}