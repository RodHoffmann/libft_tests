/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 11:01:08 by rohoffma          #+#    #+#             */
/*   Updated: 2024/05/24 15:28:12 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
//#include <bsd/string.h>
#include "../libft.h"
#include <stdlib.h>

static	void	test(const char *s, unsigned int start, size_t len, char *check)
{
	char	*res;

	res = ft_substr(s, start, len);
	if ((res == NULL && check == NULL))
	{
		printf("Test for string '%s' with index '%u' and len '%zu': \033[0;32mPassed\033[0m\n", s, start, len);
	}
	else if (res == NULL || check == NULL)
	{
		printf("Test for string '%s' with index '%u' and len '%zu': \033[0;31mFailed\033[0m\n", s, start, len);
		printf("ft_substr outcome: %s\n Expected outcome: %s\n", res, check);
	}
	else if (!strcmp(res, check))
	{
		printf("Test for string '%s' with index '%u' and len '%zu': \033[0;32mPassed\033[0m\n", s, start, len);
	}
	else
	{
		printf("Test for string '%s' with index '%u' and len '%zu': \033[0;31mFailed\033[0m\n", s, start, len);
		printf("ft_substr outcome: %s\n Expected outcome: %s\n", res, check);
	}
	if (res != NULL)
		free(res);
}

void	test_substr(void)
{
	const char	s1[] = "";
	const char	s2[] = "";
	const char	s3[] = "Substring starting s until e...";
	const char	s4[] = "Trying with starting index bigger then srcstr";
	const char	s5[] = "Substring starting s and len going after end";
	const char	s6[] = "Taking the whole src string";

	char		*check1 = "";
	char		check2[] = "";
	char		check3[] = "s until e";
	char		*check4 = "";
	char		check5[] = "s and len going after end";
	char		check6[] = "Taking the whole src string";

	unsigned int	start1 = 0;
	unsigned int	start2 = 0;
	unsigned int	start3 = 19;
	unsigned int	start4 = 100;
	unsigned int	start5 = 19;
	unsigned int	start6 = 0;
	
	size_t		c1 = 0;
	size_t		c2 = 1;
	size_t		c3 = 9;
	size_t		c4 = 4;
	size_t		c5 = 200;
	size_t		c6 = 27;

	printf("--- Tests for ft_substr function ---\n");
	test(s1, start1, c1, check1);	
	test(s2, start2, c2, check2);
	test(s3, start3, c3, check3);
	test(s4, start4, c4, check4);
	test(s5, start5, c5, check5);
	test(s6, start6, c6, check6);
	printf("--- End of tests for 'ft_substr' ---\n\n\n");
}
