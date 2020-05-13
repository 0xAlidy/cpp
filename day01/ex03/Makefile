# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/01 09:55:35 by alidy             #+#    #+#              #
#    Updated: 2020/04/01 09:55:48 by alidy            ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS_NAME		=		main.cpp 		\
						Zombie.cpp 		\
						ZombieHorde.cpp \
						
OBJS			=		${SRCS_NAME:.cpp=.o}

NAME			=		prog

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
