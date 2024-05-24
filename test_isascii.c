/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:56:06 by rohoffma          #+#    #+#             */
/*   Updated: 2024/04/23 12:03:14 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

static	void	test(int c)
{
	if ((!ft_isascii(c) && !isascii(c)) || (ft_isascii(c) && isascii(c)))
	{
		printf("Test for value '%i': \033[0;32mPassed\033[0m\n", c);
	}
	else
	{
		printf("Test for value '%i': \033[0;31mFailed\033[0m\n", c);
	}
}

void	test_isascii(void)
{
	int	test1;
	int	test2;
	int	test3;
	int	test4;
	int	test5;

	test1 = -1;
	test2 = 0;
	test3 = 50;
	test4 = 127;
	test5 = 128;

	printf("--- Tests for 'ft_isascii' function ---\n");
	test(test1);
	test(test2);
	test(test3);
	test(test4);
	test(test5);
	printf("--- End of tests for 'ft_isascii' ---\n\n\n");
}
