/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:59:45 by rohoffma          #+#    #+#             */
/*   Updated: 2024/05/02 14:00:14 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

static	int	check_zeros(void *ptr, size_t count, size_t size);
static	void	test(size_t count, size_t size);

void	test_calloc(void)
{
	char	c;
	int	i;
	double	d;
	int	*ptr_i;
	int	*ptr_to_ptr_i;

	size_t	count1 = 0;
	size_t	count2 = 5000000000000000;
	size_t	count3 = 1;
	size_t	count4 = 3;
	size_t	count5 = 1000;

	printf("--- Tests for 'ft_calloc' function ---\n");
	printf("Testing for %zu elements of the size of char (%zu):", count1, sizeof(c));
	test(count1, sizeof(c));
	printf("Testing for %zu elements of the size of int (%zu):", count2, sizeof(i));
	test(count2, sizeof(i));	
	printf("Testing for %zu elements of the size of double (%zu):", count3, sizeof(d));
	test(count3, sizeof(d));
	printf("Testing for %zu elements of the size of pointer to int (%zu):", count4, sizeof(ptr_i));
	test(count4, sizeof(ptr_i));
	printf("Testing for %zu elements of the size of pointer to pointer to int (%zu):", count5, sizeof(ptr_to_ptr_i));
	test(count5, sizeof(ptr_to_ptr_i));
	printf("--- End of tests for 'ft_calloc' ---\n\n\n");
}

static	void	test(size_t count, size_t size)
{
	void	*ptr_ft;
	void	*ptr_bi;

	ptr_ft = ft_calloc(count, size);
	ptr_bi = calloc(count, size);
	if (ptr_ft == NULL)
	{
		printf("\nft_calloc failed to allocate memory\n");
	}
	if (ptr_bi == NULL)
	{
		printf("\ncalloc failed to allocate memory\n");
	}
	if ((ptr_ft == NULL && ptr_bi == NULL) || (ptr_ft != NULL && check_zeros(ptr_ft, count, size)))
	{
		printf("\033[0;32m Passed\033[0m\n");
	}
	else
	{
		printf("\033[0;31m Failed\033[0m\n");
	}
	if (ptr_ft != NULL)
		free(ptr_ft);
	if (ptr_bi != NULL)
		free(ptr_bi);
}

static	int	check_zeros(void *ptr, size_t count, size_t size)
{
	size_t	total_size;
	size_t	i;
	unsigned char	*byte_ptr;

	total_size = count * size;
	i = 0;
	byte_ptr = (unsigned char*)ptr;
	while (i < total_size)
	{
		if (byte_ptr[i] != 0)
			return (0);
		i++;
	}
	return (1);
}
