CC = gcc
CFLAGS = -Wall -Wextra -Werror -Ilibft

SRCS_SERVER = server.c
SRCS_CLIENT = client.c

OBJS_SERVER = $(SRCS_SERVER:.c=.o)
OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)

NAME_SERVER = server
NAME_CLIENT = client

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(LIBFT) $(NAME_SERVER) $(NAME_CLIENT)

bonus: $(LIBFT)
	@$(MAKE) -C $(LIBFT_DIR) bonus > /dev/null 2>&1
	@echo "goot job!•ᴗ•"

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR) > /dev/null 2>&1
	@echo "libft's ready, dont forget the bonus >ᴗ<"

$(NAME_SERVER): $(OBJS_SERVER) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS_SERVER) -L$(LIBFT_DIR) -lft -o $(NAME_SERVER) > /dev/null 2>&1
	@echo "𐙚 server's readyy!"

$(NAME_CLIENT): $(OBJS_CLIENT) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS_CLIENT) -L$(LIBFT_DIR) -lft -o $(NAME_CLIENT) > /dev/null 2>&1
	@echo "𐙚 client's readyy!"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@ > /dev/null 2>&1

clean:
	@rm -f $(OBJS_SERVER) $(OBJS_CLIENT)
	@$(MAKE) -C $(LIBFT_DIR) clean > /dev/null 2>&1
	@echo "object files got cleaned ♬⋆.˚"

fclean: clean
	@rm -f $(NAME_SERVER) $(NAME_CLIENT)
	@$(MAKE) -C $(LIBFT_DIR) fclean > /dev/null 2>&1
	@echo "but $(NAME_SERVER) and $(NAME_CLIENT) got cleaned too ꒰ᐢ. .ᐢ꒱"

re: fclean all

.PHONY: all clean fclean re
