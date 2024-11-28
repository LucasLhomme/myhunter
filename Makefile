##
## EPITECH PROJECT, 2024
## Makefile Root
## File description:
## MakeFile dans le fichier root
##

pathdir=./src/lib

NAME = my_hunter

ASSET = ./src/song/loading_music.c \
	./src/sprite/loading_sprite.c \
	./src/sprite/loading_background.c \
	./src/sprite/moving_sprite.c \
	./src/sprite/loading_event.c \
	./src/text/loading_text.c \

CFLAGS += -g -Wall -Werror -Wextra -W -I include

LIB =	$(pathdir)/my_getnbr.c\
	$(pathdir)/my_put_nbr.c\
	$(pathdir)/my_putchar.c\
	$(pathdir)/my_putstr.c\
	$(pathdir)/my_revstr.c\
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
		gcc -o my_hunter my_hunter.c main.c -I include my_hunter_lib\
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
