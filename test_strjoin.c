/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:37:21 by rohoffma          #+#    #+#             */
/*   Updated: 2024/05/03 17:24:48 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
//#include <bsd/string.h>
#include "../libft.h"
#include <stdlib.h>

static	void	test(char const *s1, char const *s2, char *check)
{
	char	*dest;

	dest = ft_strjoin(s1, s2);
	if ((dest == NULL && check == NULL))
	{
		printf("Test for strin '%s' and '%s': \033[0;32mPassed\033[0m\n", s1, s2);
	}
	else if (dest == NULL || check == NULL)
	{
		printf("Test for string '%s' and '%s': \033[0;31mFailed\033[0m\n", s1, s2);
		printf("ft_strjoin outcome: %s\n Expected outcome: %s\n", dest, check);
	}
	else if (!strcmp(dest, check))
	{
		printf("Test for string '%s' and '%s': \033[0;32mPassed\033[0m\n", s1, s2);
	}
	else
	{
		printf("Test for string '%s' ans '%s': \033[0;31mFailed\033[0m\n", s1, s2);
		printf("ft_strjoin outcome: %s\n Expected outcome: %s\n", dest, check);
	}
	if (dest != NULL)
		free(dest);
}

void	test_strjoin(void)
{
	const char	s1_1[] = "";
	const char	s2_1[] = "";
	const char	s3_1[] = "H";
	const char	s4_1[] = "Hello";
	const char	s5_1[100] = "Now trying with buffer 100...Hello";
	
	const char	s1_2[] = "";
	const char	s2_2[] = "H";
	const char	s3_2[] = "";
	const char	s4_2[] = " World!";
	const char	s5_2[] = " World!";

	char		*check1 = "";
	char		check2[] = "H";
	char		check3[] = "H";
	char		*check4 = "Hello World!";
	char		check5[] = "Now trying with buffer 100...Hello World!";

	printf("--- Tests for ft_strjoin function ---\n");
	test(s1_1, s1_2, check1);	
	test(s2_1, s2_2, check2);
	test(s3_1, s3_2, check3);
	test(s4_1, s4_2, check4);
	test(s5_1, s5_2, check5);
	printf("--- End of tests for 'ft_strjoin' ---\n\n\n");
}
