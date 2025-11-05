NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = srcs
INC_DIR = includes

SRCS = $(SRC_DIR)/ft_putchar.c \
	$(SRC_DIR)/ft_swap.c \
	$(SRC_DIR)/ft_putstr.c \
	$(SRC_DIR)/ft_strlen.c \
	$(SRC_DIR)/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(INC_DIR)/ft.h
	echo "$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@"
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	echo "rm -f $(OBJS)"
	rm -f $(OBJS)

fclean : clean
	echo "rm -f $(NAME)"
	rm -f $(NAME)

re : fclean all
