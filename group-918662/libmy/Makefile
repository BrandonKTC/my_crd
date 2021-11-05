CC    =    GCC
SRC    =    my_putchar.c    \
            my_putnbr.c \
            my_putstr.c \
            my_strcmp.c \
            my_strlen.c \
            my_getnbr.c \
            is_num.c    \
            my_str_to_word_array.c    \
            my_delete_node.c    \
            my_print_value.c    \
            my_push_front_to_list.c    \

NAME    =    ./libmy.a

OBJ    =    $(SRC:%.c=%.o)


RM    =    rm -f

$(NAME):    $(OBJ)
				ar rc $(NAME) $(OBJ)

all:    $(NAME)

clean: 
		$(RM) $(OBJ)

fclean:        clean
		$(RM) $(NAME)

re:    fclean all
