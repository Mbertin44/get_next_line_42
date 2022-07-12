/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:43:51 by mbertin           #+#    #+#             */
/*   Updated: 2022/07/06 12:57:34 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*clean_line(char *buffer)
{
	size_t	i;
	char	*new_line;

	i = 0;
	if (!buffer[i])
		return (NULL);
	new_line = ft_calloc(sizeof(char), (ft_strlen(buffer) + 1));
	if (!new_line)
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
	{
		new_line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
	{
		new_line[i] = buffer[i];
		i++;
	}
	new_line[i] = '\0';
	return (new_line);
}

char	*buffer_without_return_line(char *buffer)
{
	size_t	i;
	size_t	j;
	char	*new_buffer;

	i = 0;
	j = 0;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	while (buffer[i] != '\n' && buffer[i])
		i++;
	new_buffer = ft_calloc(sizeof(char), (ft_strlen(buffer) - i + 1));
	if (!new_buffer)
		return (NULL);
	i++;
	while (buffer[i])
		new_buffer[j++] = buffer[i++];
	new_buffer[j] = '\0';
	free(buffer);
	return (new_buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;
	int			read_value;

	read_value = 1;
	if (read(fd, 0, 0) < 0 || BUFFER_SIZE < 1 || fd < 0)
		return (NULL);
	line = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!line)
		return (NULL);
	while (read_value != 0 && !ft_strchr(buffer, '\n'))
	{	
		read_value = read(fd, line, BUFFER_SIZE);
		if (read_value == -1)
		{
			free(line);
			return (NULL);
		}
		line[read_value] = '\0';
		buffer = ft_strjoin(buffer, line);
	}
	free(line);
	line = clean_line(buffer);
	buffer = buffer_without_return_line(buffer);
	return (line);
}
	
int    main()
{
    ssize_t    fd;
    char    *test;

        fd = open("test.txt", O_RDONLY);
    do
    {
        test = get_next_line(fd);
        printf("%s\n", test);
        if (test)
            free(test);
    } 
    while (test != NULL);
    if (test)
        free(test);
	return (0);
}
