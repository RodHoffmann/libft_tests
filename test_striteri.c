/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:52:02 by rohoffma          #+#    #+#             */
/*   Updated: 2024/05/23 15:49:35 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
//#include <bsd/string.h>
#include "../libft.h"
#include <stdlib.h>

static void	char_toupper(unsigned int i, char *c);

static	void	test(char *s, char *check, char *o)
{
	ft_striteri(s, &char_toupper);
	if ((s == NULL && check == NULL))
	{
		printf("Test for string '%s': \033[0;32mPassed\033[0m\n", o);
	}
	else if (s == NULL || check == NULL)
	{
		printf("Test for string '%s': \033[0;31mFailed\033[0m\n", o);
		printf("ft_strmapi outcome: %s\n Expected outcome: %s\n", s, check);
	}
	else if (!strcmp(s, check))
	{
		printf("Test for string '%s': \033[0;32mPassed\033[0m\n", o);
	}
	else
	{
		printf("Test for string '%s': \033[0;31mFailed\033[0m\n", o);
		printf("ft_strmapi outcome: %s\n Expected outcome: %s\n", s, check);
	}
}

void	test_striteri(void)
{
	char	s1[] = "touppercaseonlyoddindexes";
	char	s2[] = "";
	char	s3[] = "777 also at odd 777";

	char	o1[] = "touppercaseonlyoddindexes";
	char	o2[] = "";
	char	o3[] = "777 also at odd 777";
	
	char	check1[] = "tOuPpErCaSeOnLyOdDiNdExEs";
	char	check2[] = "";
	char	check3[] = "777 aLsO At oDd 777";

	printf("--- Tests for ft_striteri function ---\n");
	test(s1, check1, o1);	
	test(s2, check2, o2);
	test(s3, check3, o3);
	printf("--- End of tests for 'ft_striteri' ---\n\n\n");
}

static void	char_toupper(unsigned int i, char *c)
{

	if (*c >= 'a' && *c <= 'z' && (i % 2 == 1))
		*c -= 32;;
}

