/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:20:51 by kmodise           #+#    #+#             */
/*   Updated: 2019/07/22 15:14:46 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

# include "libft/libft.h"
# include <sys/stat.h>
# include <dirent.h>
# include <sys/dir.h>
# include <pwd.h>
# include <sys/types.h>
# include <uuid/uuid.h>

int			lst_a(const	char *filename);
int			lst(const char *filename);
int			lst_l(const char *filename);
int		    other(struct stat buff);
#endif
