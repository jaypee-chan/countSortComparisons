SRC	=		Selection.cpp \
			Insertion.cpp \
			Bubble.cpp \
			Merge.cpp \
			Quick.cpp \
			Sorter.cpp \
			main.cpp

OBJ	=	$(SRC:.cpp=.o)

GCC	=	g++ -o

RM	=	rm -f

NAME	=	countSortComparisons

CFLAGS	=	-Wall -Werror -std=c++11

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		$(GCC) $(NAME) $(OBJ)

clean	:
		$(RM) $(OBJ)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean
