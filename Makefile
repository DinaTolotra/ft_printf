NAME = libftprintf.a

CC = cc
AR = ar rcs
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

SOURCE = source
INCLUDE = include

SRCS = ft_putunb_base.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_putlnb.c\
	ft_putunb.c\
	ft_print_char_l.c\
	ft_print_str_l.c\
	ft_print_ptr_l.c\
	ft_print_int_l.c\
	ft_print_uint_l.c\
	ft_print_lhex_l.c\
	ft_print_uhex_l.c\
	ft_printf.c
SRCS := $(SRCS:%=$(SOURCE)/%)
OBJS = $(SRCS:.c=.o)

LIBFT = libft/libft.a

.DEFAULT_GOAL := all

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	cp -p $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

$(SOURCE)/%.o: $(SOURCE)/%.c $(INCLUDE)/libft.h
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INCLUDE)

$(LIBFT):
	$(MAKE) -C libft

$(INCLUDE)/libft.h: libft/libft.h
	cp -p $^ $@

clean:
	$(RM) $(OBJS)
	$(MAKE) -C libft clean

fclean: clean
	$(RM) $(NAME)
	$(RM) $(INCLUDE)/libft.h
	$(MAKE) -C libft fclean

re: fclean all

.PHONY: re fclean clean all
