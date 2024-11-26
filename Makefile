##
## EPITECH PROJECT, 2024
## Makefile Root
## File description:
## MakeFile dans le fichier root
##

pathdir=./src/lib

NAME = my_hunter_lib

ASSET = ./asset/song/loading_music.c \
	./asset/sprite/loading_sprite.c \
	./asset/sprite/loading_background.c \
	./asset/sprite/moving_sprite.c \
	./asset/sprite/loading_event.c \
	./asset/text/loading_text.c \

CFLAGS += -g -Wall -Werror -Wextra -W

LIB = $(pathdir)/my_compute_power_rec.c\
	$(pathdir)/my_find_prime_sup.c\
	$(pathdir)/my_getnbr.c\
	$(pathdir)/my_is_prime.c\
	$(pathdir)/my_isneg.c\
	$(pathdir)/my_put_nbr.c\
	$(pathdir)/my_putchar.c\
	$(pathdir)/my_putstr.c\
	$(pathdir)/my_revstr.c\
	$(pathdir)/my_showmem.c\
	$(pathdir)/my_sort_int_array.c\
	$(pathdir)/my_str_isalpha.c\
	$(pathdir)/my_str_islower.c\
	$(pathdir)/my_str_isnum.c\
	$(pathdir)/my_str_isprintable.c\
	$(pathdir)/my_str_isupper.c\
	$(pathdir)/my_strcapitalize.c\
	$(pathdir)/my_strcat.c\
	$(pathdir)/my_strcmp.c\
	$(pathdir)/my_strcpy.c\
	$(pathdir)/my_strlen.c\
	$(pathdir)/my_strncat.c\
	$(pathdir)/my_strncpy.c\
	$(pathdir)/my_strstr.c\
	$(pathdir)/my_strupcase.c\
	$(pathdir)/my_swap.c\
	$(pathdir)/blanck.c\
	$(pathdir)/flag_c.c\
	$(pathdir)/flag_d.c\
	$(pathdir)/flag_i.c\
	$(pathdir)/flag_o.c\
	$(pathdir)/flag_percent.c\
	$(pathdir)/flag_s.c\
	$(pathdir)/flag_x.c\
	$(pathdir)/flag_x2.c\
	$(pathdir)/my_printf.c


OBJ  	=	 $(ASSET:.c=.o)

OBJ_LIB =  $(LIB:.c=.o)

all: 	$(NAME)

$(NAME):	$(OBJ) $(OBJ_LIB)
		ar rcs $(NAME) $(OBJ)  $(OBJ_LIB)
		gcc -o my_hunter my_hunter.c main.c -Iinclude my_hunter_lib\
		-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

clean:
		rm -f $(OBJ) $(OBJ_LIB)

fclean:
		rm -f $(NAME) $(OBJ_LIB) $(OBJ)

re:
		$(MAKE) fclean
		$(MAKE) all
debug:
		$(MAKE) clean
		gcc -g main.c -Iinclude my_hunter_lib
