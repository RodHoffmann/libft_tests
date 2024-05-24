/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:12:41 by rohoffma          #+#    #+#             */
/*   Updated: 2024/04/23 12:16:05 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

static	void	test(int c)
{
	if ((!ft_isprint(c) && !isprint(c)) || (ft_isprint(c) && isprint(c)))
	{
		printf("Test for value '%i': \033[0;32mPassed\033[0m\n", c);
	}
	else
	{
		printf("Test for value '%i': \033[0;31mFailed\033[0m\n", c);
	}
}

void	test_isprint(void)
{
	int	test1;
	int	test2;
	int	test3;
	int	test4;
	int	test5;
	int	test6;

	test1 = 31;
	test2 = 32;
	test3 = 73;
	test4 = 126;
	test5 = 127;
	test6 = -73;

	printf("--- Tests for 'ft_isprint' function ---\n");
	test(test1);
	test(test2);
	test(test3);
	test(test4);
	test(test5);
	test(test6);
	printf("--- End of tests for 'ft_isprint' ---\n\n\n");
}
