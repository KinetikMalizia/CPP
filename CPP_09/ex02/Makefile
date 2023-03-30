# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmalizia <fmalizia@students.42lausanne.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/28 10:43:14 by fmalizia          #+#    #+#              #
#    Updated: 2023/03/28 10:43:14 by fmalizia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = PmergeMe

SRCS =	main.cpp PmergeMe.cpp sort.cpp
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