# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/27 10:11:39 by fmalizia          #+#    #+#              #
#    Updated: 2023/01/27 10:11:41 by fmalizia         ###   ########.ch        #
#                                                                              #
# **************************************************************************** #

NAME = out

SRCS =	main.cpp Span.cpp
OBJS = ${SRCS:.cpp=.o}

CXX  = c++

RM  = rm -f

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

run: $(NAME)
	@printf "\n\033[32;1mvvv output vvv \033[0m\n\n"
	@./out
	@printf "\n\n\n"
	@ make fclean

re:		fclean all

.PHONY:	all clean fclean re run