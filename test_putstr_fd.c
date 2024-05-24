/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 20:34:30 by rohoffma          #+#    #+#             */
/*   Updated: 2024/05/07 20:58:48 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

static	void	test(char *s)
{
	char	*read_s;
	int	fd;
	int	fd_open;
	int	bytes_read;

	read_s = malloc((ft_strlen(s) + 1) * sizeof(char));
	fd = open("ft_putstr_fd_test_file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);
	ft_putstr_fd(s, fd);
	close(fd);
	fd_open = open("ft_putstr_fd_test_file.txt", O_RDONLY);
	bytes_read = read(fd_open, read_s, ft_strlen(s) + 1);
	read_s[bytes_read] = '\0';
	close(fd_open);
	if (!strcmp(s, read_s))
	{
		printf("Test for string '%s' written in file: \033[0;32mPassed\033[0m\n", s);
	}
	else
	{
		printf("Test for char '%s' written in file: \033[0;31mFailed\033[0m\n", s);
		printf("'%s' was supposed to be written but '%s' was gotten when opened the file\n", s, read_s);
	}
	free(read_s);
	unlink("ft_putstr_fd_test_file.txt");
}

void	test_putstr_fd(void)
{
	char	s1[] = "This is the first test";
	char	s2[] = "";
	char	s3[] = "Second test";
	char	s4[] = "777";
	char	s5[] = "A";

	printf("--- Tests for ft_putstr_fd function ---\n");
	test(s1);
	test(s2);
	test(s3);
	test(s4);
	test(s5);
	printf("--- End of tests for 'ft_putstr_fd' ---\n\n\n");
}
