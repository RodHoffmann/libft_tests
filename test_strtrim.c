/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:53:47 by rohoffma          #+#    #+#             */
/*   Updated: 2024/05/21 20:16:51 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
//#include <bsd/string.h>
#include "../libft.h"
#include <stdlib.h>

static	void	test(char const *s1, char const *set, char *check)
{
	char	*dest;

	dest = ft_strtrim(s1, set);
	if ((dest == NULL && check == NULL))
	{
		printf("Test for string '%s' trimming chars from set '%s': \033[0;32mPassed\033[0m\n", s1, set);
	}
	else if (dest == NULL || check == NULL)
	{
		printf("Test for string '%s' trimming chars from set '%s': \033[0;31mFailed\033[0m\n", s1, set);
		printf("ft_strtrim outcome: %s\n Expected outcome: %s\n", dest, check);
	}
	else if (!strcmp(dest, check))
	{
		printf("Test for string '%s' trimming chars from set '%s': \033[0;32mPassed\033[0m\n", s1, set);
	}
	else
	{
		printf("Test for string '%s' trimming chars from set '%s': \033[0;31mFailed\033[0m\n", s1, set);
		printf("ft_strtrim outcome: %s\n Expected outcome: %s\n", dest, check);
	}
	if (dest != NULL)
		free(dest);
}

void	test_strtrim(void)
{
	const char	s1[] = "";
	const char	s2[] = "H";
	const char	s3[] = "aH";
	const char	s4[] = "Trying first char";
	const char	s5[100] = "Trying last char";
	const char	s6[] = "one more test";
	
	const char	set1[] = "";
	const char	set2[] = "H";
	const char	set3[] = "Ha";
	const char	set4[] = "T";
	const char	set5[] = " World!";
	const char	set6[] = "tso";

	char		*check1 = "";
	char		check2[] = "";
	char		check3[] = "";
	char		*check4 = "rying first char";
	char		check5[] = "Trying last cha";
	char		check6[] = "ne more te";

	printf("--- Tests for ft_strtrim function ---\n");
	test(s1, set1, check1);	
	test(s2, set2, check2);
	test(s3, set3, check3);
	test(s4, set4, check4);
	test(s5, set5, check5);
	test(s6, set6, check6);
	printf("--- End of tests for 'ft_strtrim' ---\n\n\n");
}
