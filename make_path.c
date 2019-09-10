/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_path.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 10:31:18 by kmodise           #+#    #+#             */
/*   Updated: 2019/09/09 15:43:21 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char				*return_str(char *d)
{
	char			*ptr;

	ptr = ft_strjoin(d, "/");
	d = ptr;
	free(ptr);	
	return(d);
} 

char				*path(char *filename, char *dir_name)
{
	return (ft_strjoin(return_str(dir_name), filename));
}
