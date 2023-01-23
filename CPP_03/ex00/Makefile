# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 11:24:07 by fmalizia          #+#    #+#              #
#    Updated: 2023/01/23 11:24:07 by fmalizia         ###   ########.ch        #
#                                                                              #
# **************************************************************************** #

NAME = out

SRCS = main.cpp ClapTrap.cpp

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

re:		fclean all

.PHONY:	all clean fclean re 