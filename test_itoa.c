/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:59:17 by rohoffma          #+#    #+#             */
/*   Updated: 2024/05/06 17:15:43 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//#include <bsd/string.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

static	void	test(int n, char *test)
{
	if (strncmp(ft_itoa(n), test, ft_strlen(test) * sizeof(char)) == 0)
	{
		printf("Test for int '%i': \033[0;32mPassed\033[0m\n", n);
	}
	else
	{
		printf("Test for int '%i': \033[0;31mFailed\033[0m\n", n);
		printf("ft_itoa returns: %s and should return: %s\n", ft_itoa(n), test);
	}

}

void	test_itoa(void)
{
	int	n1 = -2147483648;
	int	n2 = 2147483647;
	int	n3 = 0;
	int	n4 = -1;
	int	n5 = 1;
	int	n6 = -23;
	int	n7 = 23;

	char	test1[] = "-2147483648";
	char	test2[] = "2147483647";
	char	test3[] = "0";
	char	test4[] = "-1";
	char	test5[] = "1";
	char	test6[] = "-23";
	char	test7[] = "23";

	printf("--- Tests for 'ft_itoa' function ---\n");
	test(n1, test1);
	test(n2, test2);
	test(n3, test3);
	test(n4, test4);
	test(n5, test5);
	test(n6, test6);
	test(n7, test7);
	printf("--- End of tests for 'ft_itoa' ---\n\n\n");
}
