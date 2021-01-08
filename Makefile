# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/15 14:13:21 by rbourgea          #+#    #+#              #
#    Updated: 2020/01/18 13:23:05 by rbourgea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# PARAM
NAME			=	libftprintf.a
CC				=	gcc
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror -I$(LIBFT_PATH)

# LIBFT
LIBFT_PATH			=	libft
LIBFT_MAKE			=	libft_makefile
LIBFT				=	$(LIBFT_PATH)/libft.a

# SOURCES
PATH_SRCS			=	srcs
PATH_OBJS			=	objs

# NOM SOURCES
SRCS_NAME			=	ptr			\
						printf		\
						putchar		\
						putstr		\
						unsigned	\
						flags		\
						puthexa		\
						putnbr		\
						check_parse	\
						nbr_utils


SRCS_EXT			=	$(addsuffix .c, $(SRCS_NAME))

SRCS				=	$(addprefix $(PATH_SRCS)/ft_, $(SRCS_EXT))
OBJS				=	$(addprefix $(PATH_OBJS)/ft_, $(SRCS_EXT:.c=.o))

$(PATH_OBJS)/%.o:	$(PATH_SRCS)/%.c
					$(CC) $(CFLAGS) -c $< -o $@

$(NAME):			$(OBJS) $(LIBFT)
					ar rc $(NAME) $(OBJS)
					ranlib $(NAME)

$(LIBFT):
					make -C $(LIBFT_PATH) -f $(LIBFT_MAKE)
					make -C $(LIBFT_PATH) -f $(LIBFT_MAKE) bonus
					mv $(LIBFT) $(NAME)

all:				$(NAME)

clean:
					$(RM) $(OBJS)
					make -C $(LIBFT_PATH) -f $(LIBFT_MAKE) clean

fclean:				clean
					$(RM) $(NAME)
					make -C $(LIBFT_PATH) -f $(LIBFT_MAKE) fclean

re:					fclean all

.PHONY:				all clean fclean re
