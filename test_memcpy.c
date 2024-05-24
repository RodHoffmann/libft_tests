/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:28:49 by rohoffma          #+#    #+#             */
/*   Updated: 2024/04/25 15:15:43 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>
#include <stdio.h>
#include <stddef.h>

static	void	test(void *dest_ft, void *dest_mem, const void *src_ft, const void *src_mem, size_t n)
{
	ft_memcpy(dest_ft, src_ft, n);
	memcpy(dest_mem, src_mem, n);
	if (!memcmp(dest_ft, dest_mem, sizeof(*dest_ft)))
	{
		printf("\033[0;32m Passed\033[0m\n");
	}
	else
	{
		printf("\033[0;31m Failed\033[0m\n");
		printf("Dest_ft: %s\nDest_mem: %s\n", (char*)src_ft, (char*)src_mem);
	}
}

void	test_memcpy(void)
{
	char	char_buffer_ft_1[] = "Hello ";
	char	char_buffer_mem_1[] = "Hello ";
	char	char_buffer_ft_2[] = "World";
	char	char_buffer_mem_2[] = "World";
	int	int_buffer_ft_1[500];
	int	int_buffer_mem_1[500];
	int	int_buffer_ft_2[500];
	int	int_buffer_mem_2[500];
	double	double_buffer_ft_1[3];
	double	double_buffer_mem_1[3];
	double	double_buffer_ft_2[3];
	double	double_buffer_mem_2[3];

	printf("--- Tests for 'ft_memcpy' function ---\n");
	printf("Testing for char:");
	test(char_buffer_ft_1, char_buffer_mem_1, char_buffer_ft_2, char_buffer_mem_2, sizeof(char_buffer_ft_1));
	printf("Testing for int:");
	test(int_buffer_ft_1, int_buffer_mem_1, int_buffer_ft_2, int_buffer_mem_2, sizeof(int_buffer_ft_1));
	printf("Testing for double:");
	test(double_buffer_ft_1, double_buffer_mem_1, double_buffer_ft_2, double_buffer_mem_2, sizeof(double_buffer_ft_1));
	//printf("Testing for overlapped strings 1:");
	//test(char_buffer_ft_2, char_buffer_mem_2, char_buffer_ft_2 + 2, char_buffer_mem_2 + 2, 2 * sizeof(char_buffer_ft_2));
	printf("Testing for overlapped strings 2:");
	test(char_buffer_ft_2 + 2, char_buffer_mem_2 + 2, char_buffer_ft_2, char_buffer_mem_2, 3 * sizeof(char_buffer_ft_2));
	printf("--- End of tests for 'ft_memcpy' ---\n\n\n");
}
