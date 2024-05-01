# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: martina <martina@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/01 11:51:04 by martina           #+#    #+#              #
#    Updated: 2024/05/01 11:51:09 by martina          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ex05

INCLUDES := -I $(CURDIR)

SRCS := main.cpp

OBJS := $(SRCS:.cpp=.o)

CC := c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

RM := rm -f

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(INCLUDES)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re fclean clean all