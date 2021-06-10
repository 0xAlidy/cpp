# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/01 13:03:25 by alidy             #+#    #+#              #
#    Updated: 2021/06/09 10:55:34 by alidy            ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS_NAME		=		main.cpp				\
						ScalarConversion.cpp
						
OBJS			=		${SRCS_NAME:.cpp=.o}

NAME			=		convert

RM				=		rm -f

CC				=		clang++

FLAGS			=		-Wall -Wextra -Werror

all:					$(NAME)

%.o: %.cpp				
		$(CC) $(FLAG) -c $< -o $@
	
$(NAME):				$(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean:					clean
	@$(RM) $(NAME)

re:                     fclean all