/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:51:23 by mbertin           #+#    #+#             */
/*   Updated: 2022/07/07 14:48:14 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int    main()
{
    ssize_t    fd;
    char    *test;

        fd = open("one_char.txt", O_RDONLY);
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