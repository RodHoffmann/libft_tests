/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 21:59:31 by rohoffma          #+#    #+#             */
/*   Updated: 2024/05/07 22:34:35 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

static	void	test(int n, char *check)
{
	char	*read_s;
	int	fd;
	int	fd_open;
	int	bytes_read;

	read_s = malloc((ft_strlen(check) + 1) * sizeof(char));
	fd = open("ft_putnbr_fd_test_file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);
	ft_putnbr_fd(n, fd);
	close(fd);
	fd_open = open("ft_putnbr_fd_test_file.txt", O_RDONLY);
	bytes_read = read(fd_open, read_s, ft_strlen(check) + 1);
	read_s[bytes_read] = '\0';
	close(fd_open);
	if (!strcmp(check, read_s))
	{
		printf("Test for int '%d' written in file: \033[0;32mPassed\033[0m\n", n);
	}
	else
	{
		printf("Test for int '%d' written in file: \033[0;31mFailed\033[0m\n", n);
		printf("'%d' was supposed to be written but '%s' was gotten when opened the file\n", n, read_s);
	}
	free(read_s);
	unlink("ft_putnbr_fd_test_file.txt");
}

void	test_putnbr_fd(void)
{
	int	n1 = -2147483648;
	int	n2 = 2147483647;
	int	n3 = 0;
	int	n4 = -1;
	int	n5 = 1;
	int	n6 = -23;
	int	n7 = 23;

	char	test1[] = "-2147483648";
	char	test2[] = "2147483647";
	char	test3[] = "0";
	char	test4[] = "-1";
	char	test5[] = "1";
	char	test6[] = "-23";
	char	test7[] = "23";

	printf("--- Tests for ft_putnbr_fd function ---\n");
	test(n1, test1);
	test(n2, test2);
	test(n3, test3);
	test(n4, test4);
	test(n5, test5);
	test(n6, test6);
	test(n7, test7);
	printf("--- End of tests for 'ft_putnbr_fd' ---\n\n\n");
}
