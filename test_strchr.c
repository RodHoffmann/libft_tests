/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 22:15:15 by rohoffma          #+#    #+#             */
/*   Updated: 2024/04/29 22:33:16 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../libft.h"

static	void	test(const char *s, int c)
{
	if (ft_strchr(s, c) == strchr(s, c))
	{
		printf("Test for value: '%c' in string '%s': \033[0;32mPassed\033[0m\n", (unsigned char)c, s);
	}
	else
	{
		printf("Test for value: '%c' in string '%s': \033[0;31mFailed\033[0m\n", (unsigned char)c, s);
	}
}

void	test_strchr(void)
{
	const char	s1[] = "";
	const char	s2[] = "H";
	const char	s3[] = "Hello this is a test for last char 7";
	const char	s4[] = "First letter testing";
	const char	s5[] = "";
	const char	s6[] = "";
	const char	s7[] = "";
	const char	s8[] = "";
	int	test1;
	int	test2;
	int	test3;
	int	test4;
	int	test5;
	int	test6;
	int	test7;
	int	test8;

	test1 = '\0';
	test2 = '\0';
	test3 = 55;
	test4 = 70;
	test5 = 64;
	test6 = 65;
	test7 = 90;
	test8 = 91;

	printf("--- Tests for ft_strchr function ---\n");
	test(s1, test1);
	test(s2, test2);
	test(s3, test3);
	test(s4, test4);
	test(s5, test5);
	test(s6, test6);
	test(s7, test7);
	test(s8, test8);
	printf("--- End of tests for 'ft_strchr' ---\n\n\n");
}


