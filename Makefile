CC = gcc

FLAG = -Wall -Wextra -Werror

SOURCE = list_a.c list.c list_l.c main.c ft_ls.h libft/libft.a

run:
	$(CC) $(FLAG) $(SOURCE)
