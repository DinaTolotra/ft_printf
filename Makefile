NAME = libftprintf.a

CC = cc
AR = ar rcs
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -g

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

.DEFAULT_GOAL := all

all: $(NAME) libft.a

$(NAME): $(OBJS)
	$(AR) $@ $^

$(SOURCE)/%.o: $(SOURCE)/%.c $(INCLUDE)/libft.h
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INCLUDE)

libft.a: libft/libft.a
	cp -p $^ $@

libft/libft.a:
	$(MAKE) -C libft

include/libft.h: libft/libft.h
	cp -p $^ $@

clean:
	$(RM) $(OBJS)
	$(MAKE) -C libft clean

fclean: clean
	$(RM) $(NAME)
	$(RM) libft.a
	$(RM) $(INCLUDE)/libft.h
	$(MAKE) -C libft fclean

re: fclean all

.PHONY: re fclean clean all
