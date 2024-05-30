# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/03 14:32:42 by junghwle          #+#    #+#              #
#    Updated: 2024/05/30 18:54:46 by junghwle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ex03

SRCDIR=./srcs
OBJDIR=objs
SRCS=main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp \
	 RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
OBJS=$(patsubst %.cpp, $(OBJDIR)/%.o, $(SRCS))
DEPS=$(OBJS:.o=.d)

INCLUDE=-I./incs
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
	rm -rf Home

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re
.SILENT:
