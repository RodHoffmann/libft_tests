/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:31:59 by rohoffma          #+#    #+#             */
/*   Updated: 2024/05/01 16:42:58 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../libft.h"
#include <stdlib.h>

static	void	test(const char *s)
{
	if (ft_atoi(s) == atoi(s))
	{
		printf("Test for string: '%s': \033[0;32mPassed\033[0m\n", s);
	}
	else
	{
		printf("Test for string: '%s': \033[0;31mFailed\033[0m\n", s);
	}
}

void	test_atoi(void)
{
	const char	s1[] = "";
	const char	s2[] = "   +++--++asddfc3345dfdg78-+34";
	const char	s3[] = "++- 34 45";
	const char	s4[] = "73";
	const char	s5[] = "-73";
	const char	s6[] = "+73";
	const char	s7[] = "  ++--  df45- - 7";
	const char	s8[] = " 777 ";

	printf("--- Tests for ft_atoi function ---\n");
	test(s1);
	test(s2);
	test(s3);
	test(s4);
	test(s5);
	test(s6);
	test(s7);
	test(s8);
	printf("--- End of tests for 'ft_atoi' ---\n\n\n");
}

