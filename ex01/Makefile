# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 17:34:30 by krochefo          #+#    #+#              #
#    Updated: 2023/03/30 22:45:06 by krochefo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook


SRCS_FILES= main.cpp Contact.cpp PhoneBook.cpp

SRCS_PATH = ./
SRCS = $(addprefix $(SRCS_PATH), $(SRCS_FILES))

AR = ar rcs
CC = g++
RM = rm -f

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)                          

$(NAME):
	@$(CC) $(SRCS) $(CFLAGS) -o phonebook

clean:
	@$(RM) $(OBJS)

fclean:	clean
	@$(RM) $(NAME)

re:	fclean all