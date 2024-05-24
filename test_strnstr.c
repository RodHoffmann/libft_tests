/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:54:53 by rohoffma          #+#    #+#             */
/*   Updated: 2024/05/21 13:32:15 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include "../libft.h"

static	void	test(const char *big, const char *little, size_t len)
{
	if (ft_strnstr(big, little, len) == strnstr(big, little, len))
	{
		printf("Test for the first '%zu' chars of '%s' inside '%s': \033[0;32mPassed\033[0m\n", len, little, big);
	}
	else
	{
		printf("Test for the first '%zu' chars of '%s' inside '%s': \033[0;31mFailed\033[0m\n", len, little, big);
		printf("ft_strnstr: %s\n Built-in function: %s\n", ft_strnstr(big, little, len), strnstr(big, little, len));
	}
}

void	test_strnstr(void)
{
	const char	s1_1[] = "";
	const char	s2_1[] = "";
	const char	s3_1[] = "Hello this is a test for last char 7";
	const char	s4_1[] = "Little is bigger than bigger";
	const char	s5_1[] = "This is bigger and the other is empty";
	const char	s6_1[] = "This is a string searching for -this-";
	const char	s7_1[] = "This is a string searching for -this- and size 100";
	const char	s8_1[] = "No match";

	const char	s1_2[] = "";
	const char	s2_2[] = "";
	const char	s3_2[] = "Hello_this is a test for last char 7";
	const char	s4_2[] = "Little is bigger than bigger and size 100";
	const char	s5_2[] = "";
	const char	s6_2[] = "this";
	const char	s7_2[] = "this";
	const char	s8_2[] = "Z";

	size_t		c1 = 0;
	size_t		c2 = 1;
	size_t		c3 = 10;
	size_t		c4 = 100;
	size_t		c5 = 1;
	size_t		c6 = 4;
	size_t		c7 = 100;
	size_t		c8 = 4;

	printf("--- Tests for ft_strnstr function ---\n");
	test(s1_1, s1_2, c1);
	test(s2_1, s2_2, c2);
	test(s3_1, s3_2, c3);
	test(s4_1, s4_2, c4);
	test(s5_1, s5_2, c5);
	test(s6_1, s6_2, c6);
	test(s7_1, s7_2, c7);
	test(s8_1, s8_2, c8);
	printf("--- End of tests for 'ft_strnstr' ---\n\n\n");
}

