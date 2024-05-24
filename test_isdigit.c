/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:25:53 by rohoffma          #+#    #+#             */
/*   Updated: 2024/04/23 11:46:41 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

static	void	test(int c)
{
	if ((!ft_isdigit(c) && !isdigit(c)) || (ft_isdigit(c) && isdigit(c)))
	{
		printf("Test for value '%i' in ASCII: \033[0;32mPassed\033[0m\n", c);
	}
	else
	{
		printf("Test for value '%i' in ASCII: \033[0;31mFailed\033[0m\n", c);
	}
}

void	test_isdigit(void)
{
	int	test1;
	int	test2;
	int	test3;
	int	test4;
	int	test5;

	test1 = 47;
	test2 = '0';
	test3 = '5';
	test4 = '9';
	test5 = 58;

	printf("--- Tests for 'ft_isdigit' function ---\n");
	test(test1);
	test(test2);
	test(test3);
	test(test4);
	test(test5);
	printf("--- End of tests for 'ft_isdigit' ---\n\n\n");
}
