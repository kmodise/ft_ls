/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regularfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 14:18:32 by kmodise           #+#    #+#             */
/*   Updated: 2019/08/31 14:19:16 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int					regfile(const char *filename)
{
	struct stat		data;

	stat(filename, &data);
	return (S_ISREG(data.st_mode));
}

void				other_stuff(char **files,
		const char *filename, char flag, char k)
{
	files[0] = (char *)filename;
	files[1] = NULL;
	if (flag == 'l')
		fr_l(k, files);
	else
		option_display(files, flag);
}
