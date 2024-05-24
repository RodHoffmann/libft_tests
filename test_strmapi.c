/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:32:01 by rohoffma          #+#    #+#             */
/*   Updated: 2024/05/07 14:53:42 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
//#include <bsd/string.h>
#include "../libft.h"
#include <stdlib.h>

static char	char_toupper(unsigned int i, char c);

static	void	test(char const *s, char *check)
{
	char	*dest;

	dest = ft_strmapi(s, &char_toupper);
	if ((dest == NULL && check == NULL))
	{
		printf("Test for string '%s': \033[0;32mPassed\033[0m\n", s);
	}
	else if (dest == NULL || check == NULL)
	{
		printf("Test for string '%s': \033[0;31mFailed\033[0m\n", s);
		printf("ft_strmapi outcome: %s\n Expected outcome: %s\n", dest, check);
	}
	else if (!strcmp(dest, check))
	{
		printf("Test for string '%s': \033[0;32mPassed\033[0m\n", s);
	}
	else
	{
		printf("Test for string '%s': \033[0;31mFailed\033[0m\n", s);
		printf("ft_strmapi outcome: %s\n Expected outcome: %s\n", dest, check);
	}
	if (dest != NULL)
		free(dest);
}

void	test_strmapi(void)
{
	const char	s1[] = "touppercaseonlyoddindexes";
	const char	s2[] = "";
	const char	s3[] = "777 also at odd 777";

	char		check1[] = "tOuPpErCaSeOnLyOdDiNdExEs";
	char		check2[] = "";
	char		check3[] = "777 aLsO At oDd 777";

	printf("--- Tests for ft_strmapi function ---\n");
	test(s1, check1);	
	test(s2, check2);
	test(s3, check3);
	printf("--- End of tests for 'ft_strmapi' ---\n\n\n");
}

static char	char_toupper(unsigned int i, char c)
{

	if (c >= 'a' && c <= 'z' && (i % 2 == 1))
		return (c - 32);
	return (c);
}
