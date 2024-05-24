/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:18:47 by rohoffma          #+#    #+#             */
/*   Updated: 2024/04/23 17:22:41 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>
#include <stdio.h>
#include <stddef.h>

static	void	test(void *s_ft, void *s_mem, int c, size_t n)
{
	ft_memset(s_ft, c, n);
	memset(s_mem, c, n);
	if (!memcmp(s_ft, s_mem, sizeof(*s_ft)))
		printf("\033[0;32m Passed\033[0m\n");
	else
		printf("\033[0;31m Failed\033[0m\n");
}

void	test_memset(void)
{
	char	char_buffer_ft[10];
	char	char_buffer_mem[10];
	int	int_buffer_ft[500];
	int	int_buffer_mem[500];
	double	double_buffer_ft[3];
	double	double_buffer_mem[3];
	int	c;
	int	c1;
	int	c2;

	c = 'a';
	c1 = 0;
	c2 = -1;

	printf("--- Tests for 'ft_memset' function ---\n");
	printf("Testing for char:");
	test(char_buffer_ft, char_buffer_mem, c, sizeof(char_buffer_ft));
	printf("Testing for int:");
	test(int_buffer_ft, int_buffer_mem, c, sizeof(int_buffer_ft));
	printf("Testing for double:");
	test(double_buffer_ft, double_buffer_mem, c, sizeof(double_buffer_ft));
	printf("Testing for negative value of c:");
	test(int_buffer_ft, int_buffer_mem, c2, sizeof(int_buffer_ft));
	printf("Testing for 0 value of c:");
	test(int_buffer_ft, int_buffer_mem, c1, sizeof(int_buffer_ft));
	printf("--- End of tests for 'ft_memset' ---\n\n\n");
}
