CC = cc
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
	@$(MAKE) -C $(LIBFT_DIR) bonus > /dev/null
	@echo "goot job!•ᴗ•"

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR) > /dev/null
	@echo "libft's ready, dont forget the bonus >ᴗ<"

$(NAME_SERVER): $(OBJS_SERVER) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS_SERVER) -L$(LIBFT_DIR) -lft -o $(NAME_SERVER) > /dev/null
	@echo "server's readyy!"

$(NAME_CLIENT): $(OBJS_CLIENT) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS_CLIENT) -L$(LIBFT_DIR) -lft -o $(NAME_CLIENT) > /dev/null
	@echo "client's readyy!"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@ > /dev/null

clean:
	@rm -f $(OBJS_SERVER) $(OBJS_CLIENT)
	@$(MAKE) -C $(LIBFT_DIR) clean > /dev/null
	@echo "object files got cleaned ♬⋆.˚"

fclean: clean
	@rm -f $(NAME_SERVER) $(NAME_CLIENT)
	@$(MAKE) -C $(LIBFT_DIR) fclean > /dev/null
	@echo "$(NAME_SERVER) and $(NAME_CLIENT) got cleaned too ᐢ. .ᐢ"

re: fclean all

.SECONDARY: $(OBJS_SERVER) $(OBJS_CLIENT)

.PHONY: all clean fclean re 
