/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_extention.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 16:22:04 by kmodise           #+#    #+#             */
/*   Updated: 2019/08/31 16:22:07 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void				lst_extention(int i, DIR *dir, char **files)
{
	struct dirent	*sd;

	while ((sd = readdir(dir)) != NULL)
		files[i++] = sd->d_name;
	i = 0;
}
