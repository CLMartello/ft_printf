CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a 

C_FILES = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_hexnbr.c ft_address.c

O_FILES = $(C_FILES:.c=.o)

all: $(NAME)

$(NAME): $(O_FILES)
	ar rcs $(NAME) $(O_FILES)

$(O_FILES): $(C_FILES)
	$(CC) $(CFLAGS) -c $(C_FILES)

clean:
	rm -rf $(O_FILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all
