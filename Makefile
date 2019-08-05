CC = gcc

FLAG = -Wall -Wextra -Werror

SOURCE = list.c list_l.c alpha_sort.c rev_sort.c time_sort.c list_l_data.c main.c ft_ls.h list_other.c list_r.c libft/libft.a

run:
	$(CC) $(FLAG) $(SOURCE)
	
