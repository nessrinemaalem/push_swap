# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/12 14:27:11 by imaalem           #+#    #+#              #
#    Updated: 2022/02/21 11:40:56 by imaalem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

INCS	=	libft.h

SRCS	=	ft_putchar.c \
			ft_itoa.c \
			ft_putstr_fd.c \
			ft_strncmp.c \
			ft_atoi.c \
			ft_memccpy.c \
	       	ft_split.c \
			ft_strnstr.c \
			ft_bzero.c \
     		ft_memchr.c \
	 	  	ft_strchr.c \
			ft_strrchr.c \
			ft_calloc.c \
    		ft_memcmp.c \
	    	ft_strdup.c \
		    ft_strtrim.c \
			ft_isalnum.c \
			ft_memcpy.c \
			ft_strjoin.c \
			ft_substr.c \
			ft_isalpha.c \
			ft_memmove.c \
			ft_strlcat.c \
	    	ft_tolower.c \
			ft_isascii.c \
			ft_memset.c \
			ft_strlcpy.c \
			ft_toupper.c \
			ft_isdigit.c \
			ft_putchar_fd.c \
			ft_strlen.c \
			ft_isprint.c \
			ft_putnbr_fd.c \
			ft_strmapi.c \
			ft_error.c \
			ft_putendl_fd.c \
			ft_atol.c

OBJS	=	 ${SRCS:.c=.o}

CC		=	clang

CFLAGS	=	-Wall -Wextra -Werror

LIBC	=	ar rc
LIBR	=	ranlib

RM		=	rm -f

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

$(NAME):	${OBJS} ./libft.h
			${LIBC} ${NAME} ${OBJS}
			${LIBR} ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:	clean
			${RM} ${NAME}			

re :		fclean all

.PHONY:		all clean fclean re