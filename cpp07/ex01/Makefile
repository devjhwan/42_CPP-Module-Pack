# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/03 14:32:42 by junghwle          #+#    #+#              #
#    Updated: 2024/05/17 19:22:06 by junghwle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ex01

SRCDIR=.
OBJDIR=objs
SRCS=main.cpp
OBJS=$(patsubst %.cpp, $(OBJDIR)/%.o, $(SRCS))
DEPS=$(OBJS:.o=.d)

INCLUDE=-I.
CC=c++
CFLAGS=-Wall -Werror -Wextra
DEPFLAGS=-MMD
EXTRAFLAGS=-std=c++98
LIBRARIES=

all: $(OBJDIR) $(NAME)

$(NAME): $(OBJS) Makefile
	$(CC) $(CFLAGS) $(EXTRAFLAGS) -o $@ $(OBJS) $(LIBRARIES)
	echo "(CPP05-EX00)COMPILING $@"

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp Makefile 
	$(CC) $(DEPFLAGS) $(CFLAGS) $(EXTRAFLAGS) $(INCLUDE) -c -o $@ $<
	echo "(CPP05-EX00)COMPILING $@"

$(OBJDIR): Makefile
	mkdir -p $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re
.SILENT:
