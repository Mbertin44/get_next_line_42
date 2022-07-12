/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:20:47 by mbertin           #+#    #+#             */
<<<<<<< HEAD:includes/get_next_line.h
/*   Updated: 2022/07/11 14:17:36 by mbertin          ###   ########.fr       */
=======
/*   Updated: 2022/07/06 12:55:31 by mbertin          ###   ########.fr       */
>>>>>>> c3e8836872e2da7b36c7a469fa968816f442c635:get_next_line.h
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
<<<<<<< HEAD:includes/get_next_line.h
# define BUFFER_SIZE 5
=======
#  define BUFFER_SIZE 10
>>>>>>> c3e8836872e2da7b36c7a469fa968816f442c635:get_next_line.h
# endif

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);
<<<<<<< HEAD:includes/get_next_line.h
=======
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
>>>>>>> c3e8836872e2da7b36c7a469fa968816f442c635:get_next_line.h
void	*ft_calloc(size_t nbr, size_t size);

#endif