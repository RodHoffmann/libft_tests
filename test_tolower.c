/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 21:53:48 by rohoffma          #+#    #+#             */
/*   Updated: 2024/04/29 21:55:03 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../libft.h"

static	void	test(int c)
{
	if (ft_tolower(c) == tolower(c))
	{
		printf("Test for value '%i' in ASCII: \033[0;32mPassed\033[0m\n", c);
	}
	else
	{
		printf("Test for value '%i' in ASCII: \033[0;31mFailed\033[0m\n", c);
	}
}

void	test_tolower(void)
{
	int	test1;
	int	test2;
	int	test3;
	int	test4;
	int	test5;
	int	test6;
	int	test7;
	int	test8;

	test1 = 96;
	test2 = 97;
	test3 = 122;
	test4 = 123;
	test5 = 64;
	test6 = 65;
	test7 = 90;
	test8 = 91;

	printf("--- Tests for ft_tolower function ---\n");
	test(test1);
	test(test2);
	test(test3);
	test(test4);
	test(test5);
	test(test6);
	test(test7);
	test(test8);
	printf("--- End of tests for 'ft_tolower' ---\n\n\n");
}


