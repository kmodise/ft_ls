CC = gcc

FLAG = -Wall -Wextra -Werror

OBJ = $(SOURCE:.c=.o)

NAME = libft.a

SOURCE = list.c list_l.c alpha_sort.c rev_sort.c time_sort.c list_l_data.c main.c ft_ls.h list_more_data.c list_r.c libft/libft.a for_l.c multi_flag.c regularfile.c is_dir.c error.c lst_extention.c make_path.c libft/libft.a

all:
	cd ./libft && make && make clean && cd ..
	$(CC) $(FLAG) $(SOURCE)
	alias ft_ls=./a.out

fclean:
	