/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:51:23 by mbertin           #+#    #+#             */
/*   Updated: 2022/07/07 14:48:36 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int    main()
{
    int     i;
    int     fd3;
    int     fd4;
    int     fd5;
    int     fd6;
    int     fd7;
    int     fd8;
    int     fd9;
    char    *test_fd3;
    char    *test_fd4;
    char    *test_fd5;
    char    *test_fd6;
    char    *test_fd7;
    char    *test_fd8;
    char    *test_fd9;

    i = 1;
    fd3 = open("one_char.txt", O_RDONLY);
    fd4 = open("four_new_line.txt", O_RDONLY);
    fd5 = open("nl_one_line.txt", O_RDONLY);
    fd6 = open("one_char.txt", O_RDONLY);
    fd7 = open("superlongline.txt", O_RDONLY);
    fd8 = open("empty.txt", O_RDONLY);
    fd9 = open("five_line.txt", O_RDONLY);
    do
    {
        test_fd3 = get_next_line(fd3);
        test_fd4 = get_next_line(fd4);
        test_fd5 = get_next_line(fd5);
        test_fd3 = get_next_line(fd3);
        test_fd4 = get_next_line(fd4);
        test_fd5 = get_next_line(fd5);
        test_fd6 = get_next_line(fd6);
        test_fd7 = get_next_line(fd7);
        test_fd8 = get_next_line(fd8);
        test_fd9 = get_next_line(fd9);
        printf("Appel numéro : %d\n\n", i);
        i++;
        printf("one_char.txt : %s\nfour_new_line.txt : %s\nnl_one_line.txt : %s\none_char.txt : %s\nsuperlongline.txt : %s\nempty.txt : %s\nfive_line.txt : %s\n\n", test_fd3, test_fd4, test_fd5, test_fd6, test_fd7, test_fd8, test_fd9);
        if (test_fd3)
            free(test_fd3);
        if (test_fd4)
            free(test_fd4);
        if (test_fd5)
            free(test_fd5);
        if (test_fd6)
            free(test_fd6);
        if (test_fd7)
            free(test_fd7);
        if (test_fd8)
            free(test_fd8);
        if (test_fd9)
            free(test_fd9);
    } 
    while (test_fd3 != NULL || test_fd4 != NULL || test_fd5 != NULL || test_fd6 != NULL || test_fd7 != NULL || test_fd8 != NULL || test_fd9 != NULL);
    if (test_fd3)
        free(test_fd3);
    if (test_fd4)
        free(test_fd4);
    if (test_fd5)
        free(test_fd5);
    if (test_fd6)
         free(test_fd6);
    if (test_fd7)
         free(test_fd7);
    if (test_fd8)
       free(test_fd8);
    if (test_fd9)
       free(test_fd9);
	return (0);
}