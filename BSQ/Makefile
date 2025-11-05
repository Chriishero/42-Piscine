NAME = bsq

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS_DIR = srcs
INC_DIR = includes
OBJS_DIR = objs

SRCS = \
	$(SRCS_DIR)/main.c \
	$(SRCS_DIR)/ft_getmap.c \
	$(SRCS_DIR)/ft_err.c \
	$(SRCS_DIR)/ft_get_solution.c \
	$(SRCS_DIR)/ft_utils.c \
	$(SRCS_DIR)/ft_verification.c
OBJS = $(patsubst $(SRCS_DIR)/%.c, $(OBJS_DIR)/%.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I$(INC_DIR) -o $(NAME) $(OBJS)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
