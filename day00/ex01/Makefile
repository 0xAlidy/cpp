# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/19 11:50:58 by alidy             #+#    #+#              #
#    Updated: 2021/05/25 15:49:29 by alidy            ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS_NAME		=		main.cpp 		\
						Contact.cpp 	\
						search_cmd.cpp	\
						
OBJS			=		${SRCS_NAME:.cpp=.o}

NAME			=		annuaire

RM				=		rm -f

CC				=		clang++

FLAGS			=		-Wall -Wextra -Werror -std=c++98

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