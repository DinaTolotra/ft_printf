NAME = libftprintf.a

CC = cc
AR = ar rcs
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

LDEPS = libft
SRCS = ft_putnb_base.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_putnb.c\
	ft_putunb.c\
	ft_print_char_l.c\
	ft_print_str_l.c\
	ft_print_ptr_l.c\
	ft_print_dec_l.c\
	ft_print_int_l.c\
	ft_print_uint_l.c\
	ft_print_lhex_l.c\
	ft_print_uhex_l.c\
	ft_printf.c
OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS) $(LDEPS:%=%.a) $(LDEPS:%=%.h)
	$(AR) $@ $^

$(LDEPS):
	$(MAKE) -C $@

$(LDEPS:%=%.a) $(LDEPS:%=%.h): $(LDEPS)
	cp $^/$@ $@

%.o: %.c $(LDEPS)
	$(CC) $(CFLAGS) -c $< -o $@ $(LDEPS:%=-I%)

all: $(NAME)

clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LDEPS) clean

fclean: clean
	$(RM) $(NAME) $(LDEPS:%=%.a) $(LDEPS:%=%.h)
	$(MAKE) -C $(LDEPS) fclean

re: fclean all

.PHONY: re fclean clean all $(LDEPS)
