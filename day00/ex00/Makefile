# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/18 15:48:47 by alidy             #+#    #+#              #
#    Updated: 2021/05/25 16:18:55 by alidy            ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS_NAME		=		megaphone.cpp
						
OBJS			=		${SRCS_NAME:.cpp=.o}

NAME			=		megaphone

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
	