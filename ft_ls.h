/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:20:51 by kmodise           #+#    #+#             */
/*   Updated: 2019/07/17 11:33:17 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LS_H
# define LS_H

# include "libft/libft.h"
# include <dirent.h>

int		lst_a(const	char *filename);
int		lst(const char *filename);
#endif
