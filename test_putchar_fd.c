/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 19:26:25 by rohoffma          #+#    #+#             */
/*   Updated: 2024/05/07 20:58:12 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../libft.h"
#include <fcntl.h>
#include <unistd.h>

static	void	test(char c)
{
	char	read_c;
	int	fd;
	int	fd_open;

	fd = open("ft_putchar_fd_test_file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);
	ft_putchar_fd(c, fd);
	close(fd);
	fd_open = open("ft_putchar_fd_test_file.txt", O_RDONLY);
	read(fd_open, &read_c, sizeof(char));
	close(fd_open);
	if (c == read_c)
	{
		printf("Test for char '%c' written in file: \033[0;32mPassed\033[0m\n", c);
	}
	else
	{
		printf("Test for char '%c' written in file: \033[0;31mFailed\033[0m\n", c);
		printf("'%c' was supposed to be written but '%c' was gotten when opened the file\n", c, read_c);
	}
	unlink("ft_putchar_fd_test_file.txt");
}

void	test_putchar_fd(void)
{
	char	c1 = 'a';
	char	c2 = '7';
	char	c3 = ' ';
	char	c4 = 'Z';
	char	c5 = '(';

	printf("--- Tests for ft_putchar_fd function ---\n");
	test(c1);
	test(c2);
	test(c3);
	test(c4);
	test(c5);
	printf("--- End of tests for 'ft_putchar_fd' ---\n\n\n");
}

