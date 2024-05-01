# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: martina <martina@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/01 10:56:52 by martina           #+#    #+#              #
#    Updated: 2024/05/01 10:58:12 by martina          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ex03

INCLUDES := -I $(CURDIR)

SRCS := main.cpp\
	  Weapon.cpp \
	  HumanA.cpp \
	  HumanB.cpp

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