/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:57:49 by rohoffma          #+#    #+#             */
/*   Updated: 2024/04/24 20:05:39 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <strings.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

static	void	test(void *s_ft, void *s_mem, size_t n)
{
	ft_bzero(s_ft, n);
	bzero(s_mem, n);
	if (!memcmp(s_ft, s_mem, sizeof(*s_ft)))
		printf("\033[0;32m Passed\033[0m\n");
	else
		printf("\033[0;31m Failed\033[0m\n");
}

void	test_bzero(void)
{
	char	char_buffer_ft[10];
	char	char_buffer_mem[10];
	int	int_buffer_ft[500];
	int	int_buffer_mem[500];
	double	double_buffer_ft[3];
	double	double_buffer_mem[3];

	printf("--- Tests for 'ft_bzero' function ---\n");
	printf("Testing for char:");
	test(char_buffer_ft, char_buffer_mem, sizeof(char_buffer_ft));
	printf("Testing for int:");
	test(int_buffer_ft, int_buffer_mem, sizeof(int_buffer_ft));
	printf("Testing for double:");
	test(double_buffer_ft, double_buffer_mem, sizeof(double_buffer_ft));
	printf("--- End of tests for 'ft_bzero' ---\n\n\n");
}
