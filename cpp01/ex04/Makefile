# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/03 14:32:42 by junghwle          #+#    #+#              #
#    Updated: 2023/12/23 19:35:43 by junghwle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=replaceString

SRCDIR=.
OBJDIR=objs
SRCS=main.cpp
OBJS=$(patsubst %.cpp, $(OBJDIR)/%.o, $(SRCS))
DEPS=$(OBJS:.o=.d)

INCLUDE=-I.
CC=g++
CFLAGS=-Wall -Werror -Wextra
DEPFLAGS=-MMD
EXTRAFLAGS=-std=c++98
LIBRARIES=

all: $(OBJDIR) $(NAME)

$(NAME): $(OBJS) Makefile
	$(CC) $(CFLAGS) $(EXTRAFLAGS) -o $@ $(OBJS) $(LIBRARIES)
	echo "(CPP01-EX04)COMPILING $@"

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp Makefile 
	$(CC) $(DEPFLAGS) $(CFLAGS) $(EXTRAFLAGS) $(INCLUDE) -c -o $@ $<
	echo "(CPP01-EX04)COMPILING $@"

$(OBJDIR): Makefile
	mkdir -p $@

clean:
	rm -rf $(OBJDIR)
	rm -rf *.replace

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re
.SILENT:
