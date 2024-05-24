/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:32:41 by rohoffma          #+#    #+#             */
/*   Updated: 2024/04/23 13:27:54 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>
#include <stdio.h>

static	void	test(char *c)
{
	if (ft_strlen(c) == strlen(c))
	{
		printf("Test for string '%s' in ASCII: \033[0;32mPassed\033[0m\n", c);
	}
	else
	{
		printf("Test for string '%s' in ASCII: \033[0;31mFailed\033[0m\n", c);
		printf("ft_strlen function returns: %zu\n", ft_strlen(c));
		printf("Built-In function returns: %zu\n", strlen(c));
	}
}

void	test_strlen(void)
{
	char	string1[] = "";
	char	string2[] = "Hello World";
	char	string3[] = "]";
	char	string4[] = " ";
	char	string5[] = "...yet another test    ";
	char	*ptr1;
	char	*ptr2;
	char	*ptr3;
	char	*ptr4;
	char	*ptr5;

	ptr1 = &string1[0];
	ptr2 = &string2[0];
	ptr3 = &string3[0];
	ptr4 = &string4[0];
	ptr5 = &string5[0];

	printf("--- Tests for 'ft_strlen' function ---\n");
	test(ptr1);
	test(ptr2);
	test(ptr3);
	test(ptr4);
	test(ptr5);
	printf("--- End of tests for 'ft_strlen' ---\n\n\n");
}
