/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:02:04 by mbertin           #+#    #+#             */
<<<<<<< HEAD:srcs/get_next_line_utils.c
/*   Updated: 2022/07/07 11:57:59 by mbertin          ###   ########.fr       */
=======
/*   Updated: 2022/07/06 12:49:28 by mbertin          ###   ########.fr       */
>>>>>>> c3e8836872e2da7b36c7a469fa968816f442c635:get_next_line_utils.c
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	c = (char)c;
	if (!s)
		return (NULL);
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return ((char *)s + i);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1)
<<<<<<< HEAD:srcs/get_next_line_utils.c
		s1 = (char *)ft_calloc(sizeof(char), 1);
	if (!s1 || !s2)
		return (NULL);
	str = ft_calloc(sizeof(char), (ft_strlen(s1) + ft_strlen(s2) + 1));
=======
		s1 = ft_calloc(sizeof(char), 1);
	if (!s1 || !s2)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
>>>>>>> c3e8836872e2da7b36c7a469fa968816f442c635:get_next_line_utils.c
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i++] = s2[j++];
	}
<<<<<<< HEAD:srcs/get_next_line_utils.c
=======
	str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
>>>>>>> c3e8836872e2da7b36c7a469fa968816f442c635:get_next_line_utils.c
	free (s1);
	return (str);
}

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	*ft_calloc(size_t nbr, size_t size)
{
	void	*tab;
	size_t	i;

	i = 0;
	if (nbr == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	tab = malloc(nbr * size);
	if (!tab)
		return (NULL);
	while (i < nbr * size)
	{
		*(char *)(tab + i) = 0;
		i++;
	}
	return (tab);
}
