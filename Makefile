CC = cc

NAME = libftprintf.a

SRC = ft_printf.c \
		ft_printfaux.c \
		ft_auxextra.c \

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	
%.o: %.c
	@echo "Compiling..." $<
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "OBJ CLEANED!"
fclean:
	@rm -f $(OBJ) $(NAME)
	@echo "ALL CLEANED!"

re: fclean all

.PHONY: all clean fclean re
