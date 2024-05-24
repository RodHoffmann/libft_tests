/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:33:23 by rohoffma          #+#    #+#             */
/*   Updated: 2024/05/21 16:37:52 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../libft.h"

static	void	test(const char *s1, const char *s2, int c)
{
	if (ft_strncmp(s1, s2, c) == strncmp(s1, s2, c))
	{
		printf("Test for string 1: '%s' and string 2: '%s': \033[0;32mPassed\033[0m\n", s1, s2);
	}
	else
	{
		printf("Test for string 1: '%s' and string 2: '%s': \033[0;31mFailed\033[0m\n", s1, s2);
	}
}

void	test_strncmp(void)
{
	const char	s1_1[] = "";
	const char	s2_1[] = "";
	const char	s3_1[] = "Hello this is a test for last char 7";
	const char	s4_1[] = "First 3 chars testing";
	const char	s5_1[] = "This is bigger and the other is empty";
	const char	s6_1[] = "Another test";
	const char	s7_1[] = "Testing with last char diff";
	const char	s8_1[] = "";

	const char	s1_2[] = "";
	const char	s2_2[] = "";
	const char	s3_2[] = "HelloXthis is a test for last char 7";
	const char	s4_2[] = "First 3 chars testing";
	const char	s5_2[] = "";
	const char	s6_2[] = "";
	const char	s7_2[] = "Testing with last char difg";
	const char	s8_2[] = "";

	size_t		c1 = 0;
	size_t		c2 = 1;
	size_t		c3 = 10;
	size_t		c4 = 3;
	size_t		c5 = 3;
	size_t		c6 = 0;
	size_t		c7 = 27;
	size_t		c8 = 0;

	printf("--- Tests for ft_strncmp function ---\n");
	test(s1_1, s1_2, c1);
	test(s2_1, s2_2, c2);
	test(s3_1, s3_2, c3);
	test(s4_1, s4_2, c4);
	test(s5_1, s5_2, c5);
	test(s6_1, s6_2, c6);
	test(s7_1, s7_2, c7);
	test(s8_1, s8_2, c8);
	printf("--- End of tests for 'ft_strncmp' ---\n\n\n");
}

