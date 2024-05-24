/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:29:28 by rohoffma          #+#    #+#             */
/*   Updated: 2024/05/02 14:41:22 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//#include <bsd/string.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

static	void	test(const char *s1)
{
	char	*new_string_ft;
	char	*new_string_builtin;

	new_string_ft = ft_strdup(s1);
	new_string_builtin = strdup(s1);
	if (strncmp(new_string_ft, new_string_builtin, ft_strlen(new_string_ft) * sizeof(new_string_ft)) == 0)
	{
		printf("Test for string '%s': \033[0;32mPassed\033[0m\n", s1);
	}
	else
	{
		printf("Test for string '%s': \033[0;31mFailed\033[0m\n", s1);
		printf("ft_strdup function returns: %s\n", new_string_ft);
		printf("Built-In function returns: %s\n", new_string_builtin);
	}

}

void	test_strdup(void)
{
	const char	s1[] = "";
	const char	s2[] = "Hello World";
	const char	s3[] = "]";
	const char	s4[] = " ";
	const char	s5[] = "...yet another test    ";

	printf("--- Tests for 'ft_strdup' function ---\n");
	test(s1);
	test(s2);
	test(s3);
	test(s4);
	test(s5);
	printf("--- End of tests for 'ft_strdup' ---\n\n\n");
}

