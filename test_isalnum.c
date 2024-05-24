/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:03:12 by rohoffma          #+#    #+#             */
/*   Updated: 2024/04/23 11:47:39 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../libft.h"

static	void	test(int c)
{
	if ((!ft_isalnum(c) && !isalnum(c)) || (ft_isalnum(c) && isalnum(c)))
	{
		printf("Test for value '%i' in ASCII: \033[0;32mPassed\033[0m\n", c);
	}
	else
	{
		printf("Test for value '%i' in ASCII: \033[0;31mFailed\033[0m\n", c);
	}
}

void	test_isalnum(void)
{
	int	test1;
	int	test2;
	int	test3;
	int	test4;
	int	test5;
	int	test6;
	int	test7;
	int	test8;
	int	test9;
	int	test10;
	int	test11;
	int	test12;
	int	test13;

	test1 = 96;
	test2 = 97;
	test3 = 122;
	test4 = 123;
	test5 = 64;
	test6 = 65;
	test7 = 90;
	test8 = 91;
	test9 = 47;
	test10 = '0';
	test11 = '5';
	test12 = '9';
	test13 = 58;

	printf("--- Tests for ft_isalnum function ---\n");
	test(test1);
	test(test2);
	test(test3);
	test(test4);
	test(test5);
	test(test6);
	test(test7);
	test(test8);
	test(test9);
	test(test10);
	test(test11);
	test(test12);
	test(test13);
	printf("--- End of tests for 'ft_isalnum' ---\n\n\n");
}

