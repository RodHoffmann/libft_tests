/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:11:57 by rohoffma          #+#    #+#             */
/*   Updated: 2024/05/21 14:52:08 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>
#include <stdio.h>
#include <stddef.h>

static	void	test(void *dest_ft, void *dest_mem, const void *src_ft, const void *src_mem, size_t n)
{
	ft_memmove(dest_ft, src_ft, n);
	memmove(dest_mem, src_mem, n);
	if (dest_ft == NULL && dest_mem == NULL)
		printf("\033[0;32m Passed\033[0m\n");
	else if (dest_ft == NULL || dest_mem == NULL)
		printf("\033[0;31m Failed\033[0m\nOnly one of them returns NULL\n");
	else if (!memcmp(dest_ft, dest_mem, sizeof(*dest_ft)))
		printf("\033[0;32m Passed\033[0m\n");
	else
	{
		printf("\033[0;31m Failed\033[0m\n");
	}
}

void	test_memmove(void)
{
	char	char_buffer_ft_1[] = "Hello ";
	char	char_buffer_mem_1[] = "Hello ";
	char	char_buffer_ft_2[] = "World";
	char	char_buffer_mem_2[] = "World";
	int	int_buffer_ft_1[] = {100, 2, 3, 4, 5}; 
	int	int_buffer_mem_1[] = {100, 2, 3, 4, 5};
	int	int_buffer_ft_2[] = {200, 7, 8, 9, 10};
	int	int_buffer_mem_2[] = {200, 7, 8, 9, 10};

	printf("--- Tests for 'ft_memmove' function ---\n");
	printf("Testing for char:");
	test(char_buffer_ft_1, char_buffer_mem_1, char_buffer_ft_2, char_buffer_mem_2, sizeof(*char_buffer_ft_1));
	printf("Testing for int:");
	test(int_buffer_ft_1, int_buffer_mem_1, int_buffer_ft_2, int_buffer_mem_2, sizeof(*int_buffer_ft_1));
	//printf("Testing for overlapped strings 1:");
	//test(char_buffer_ft_2, char_buffer_mem_2, char_buffer_ft_2 + 2, char_buffer_mem_2 + 2, 2 * sizeof(char_buffer_ft_2));
	printf("Testing for overlapped strings:");
	test(char_buffer_ft_2 + 2, char_buffer_mem_2 + 2, char_buffer_ft_2, char_buffer_mem_2, 3 * sizeof(*char_buffer_ft_2));
	printf("Testing for src and dest as NULL pointers:");
	test(NULL, NULL, NULL, NULL, 0);
	printf("--- End of tests for 'ft_memmove' ---\n\n\n");
}
