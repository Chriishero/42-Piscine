NAME = ft_tail

CC = cc
CFLAGS = -Wall -Wextra -Werror 

SRCS_DIR = srcs
INC_DIR = includes

SRCS = \
	$(SRCS_DIR)/ft_main.c \
	$(SRCS_DIR)/ft_tail.c \
	$(SRCS_DIR)/ft_utils.c \
	$(SRCS_DIR)/ft_print.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I$(INC_DIR) -o $(NAME) $(OBJS)

$(SRCS_DIR)/%.o: $(SRCS_DIR)/%.c $(INC_DIR)/*.h
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
