CC = gcc

FLAG = -Wall -Wextra -Werror

SOURCE = list_a.c list_ls.c list.c list_l.c main.c ft_ls.h list_other.c list_la.c libft/libft.a

run:
	$(CC) $(FLAG) $(SOURCE)
	