# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/30 10:25:54 by fmalizia          #+#    #+#              #
#    Updated: 2023/01/30 10:25:54 by fmalizia         ###   ########.ch        #
#                                                                              #
# **************************************************************************** #

NAME = out

SRCS =	main.cpp Bureaucrat.cpp Form.cpp \
		PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

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
	@./out
	@ make fclean

re:		fclean all

.PHONY:	all clean fclean re run