LIB = ../libft/libft.a

LIBN	=

CC = gcc

SOURCES = get_next_line_bonus.c get_next_line_utils_bonus.c

OBJECTS = $(SOURCES:%.c=%.o)

HEADER = get_next_line_bonus.h

NAME = get_next_line.a

CFLAGS = -Wall -Werror -Wextra -I$(HEADER)

.PHONY: all clean fclean re bonus

all	: $(NAME)

$(NAME)	: $(OBJECTS) $(HEADER)
	make -C ../libft
	cp $(LIB) $(NAME)
	ar rcs $(NAME) $(OBJECTS)
	
%.o	: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

bonus	: $(NAME)

clean	:
	make -C ../libft clean
	rm -f $(OBJECTS)

fclean	: clean
	make -C ../libft fclean
	rm -f $(NAME)

re	:  fclean all
