# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmalizia <fmalizia@students.42lausanne.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/27 15:16:00 by fmalizia          #+#    #+#              #
#    Updated: 2023/03/27 15:16:00 by fmalizia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN

SRCS =	main.cpp
OBJS = ${SRCS:.cpp=.o}

CXX  = g++

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
	@printf "\noutput\n\n"
	@./$(NAME)
	@printf "\n\n\n"
	@ make fclean

re:		fclean all

.PHONY:	all clean fclean re run