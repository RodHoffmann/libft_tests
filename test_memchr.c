/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:05:20 by rohoffma          #+#    #+#             */
/*   Updated: 2024/04/30 17:17:11 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../libft.h"

static	void	test(const char *s, int c, size_t n)
{
	if (ft_memchr(s, c, n) == memchr(s, c, n))
	{
		printf("Test for value: '%c' in string '%s' and size '%zu': \033[0;32mPassed\033[0m\n", (unsigned char)c, s, n);
	}
	else
	{
		printf("Test for value: '%c' in string '%s' and size '%zu': \033[0;31mFailed\033[0m\n", (unsigned char)c, s, n);
	}
}

void	test_memchr(void)
{
	const char	s1[] = "";
	const char	s2[] = "";
	const char	s3[] = "Hello this is a test for last char 7";
	const char	s4[] = "First letter testing";
	const char	s5[] = "";
	const char	s6[] = "";
	const char	s7[] = "";
	const char	s8[] = "";
	int	test1 = '\0';
	int	test2 = '\0';
	int	test3 = 'a';
	int	test4 = 'F';
	int	test5 = '\n';
	int	test6 = 'z';
	int	test7 = 'h';
	int	test8 = ' ';

	size_t	n1 = 0;
	size_t	n2 = 2;
	size_t	n3 = 50;
	size_t	n4 = 1;
	size_t	n5 = 30;
	size_t	n6 = 4;
	size_t	n7 = 3;
	size_t	n8 = 2;

	test1 = '\0';
	test2 = '\0';
	test3 = 'A';
	test4 = ' ';
	test5 = '7';
	test6 = '\n';
	test7 = 'z';
	test8 = 'h';

	printf("--- Tests for ft_memchr function ---\n");
	test(s1, test1, n1);
	test(s2, test2, n2);
	test(s3, test3, n3);
	test(s4, test4, n4);
	test(s5, test5, n5);
	test(s6, test6, n6);
	test(s7, test7, n7);
	test(s8, test8, n8);
	printf("--- End of tests for 'ft_memchr' ---\n\n\n");
}

