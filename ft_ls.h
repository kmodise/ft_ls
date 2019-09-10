/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:20:51 by kmodise           #+#    #+#             */
/*   Updated: 2019/09/01 10:32:04 by kmodise          ###   ########.fr       */
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
# include <grp.h>
# include <time.h>

void		lst(const char *filename, char flag, char sort, char k);
int			lst_l(char **files, char f);
int			more_data(struct stat buff);
void		file_data(char *file, struct stat buff);
void		alpha_sort(char **file);
void		tme_sort(char **file);
void		rev_sort(char **file);
void		lst_r(const char *dirname);
void		print(char **files);
void		fr_l(char k, char **files);
void		error(const char *filename);
int			is_dir(char *file);
void		multi_flags(char **argv);
void		fatality(char *argv, char flag, char sort, char display);
int			regfile(const char *filename);
void		other_stuff(char **files, const char *filename, char flag, char k);
void		option_display(char **files, char f);
void		null_or_not_alowed(const char *filename);
void		cant_handle(char *file);
void		illegal_option(char *argv);
void		lst_extention(int i, DIR *dir, char **files);
char		*path(char *filename, char *dir_name);

#endif
