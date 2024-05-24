/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 21:14:24 by rohoffma          #+#    #+#             */
/*   Updated: 2024/05/24 15:36:16 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <bsd/string.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

static	void	test(char *dst_ft, char *dst_builtin, const char *src, size_t zs)
{
	size_t	returned_ft;
	size_t	returned_builtin;

	returned_ft = ft_strlcat(dst_ft, src, zs);
	returned_builtin = strlcat(dst_builtin, src, zs);
	if ( (returned_ft == returned_builtin) && strcmp(dst_ft, dst_builtin) == 0)
	{
		printf("Test for string '%s': \033[0;32mPassed\033[0m\n", src);
		printf("ft_strlcat function returns: %s\nReturned value: %zu\n", dst_ft, returned_ft);
		printf("Built-In function returns: %s\nReturned value: %zu\n", dst_builtin, returned_builtin);
	}
	else
	{
		printf("Test for string '%s': \033[0;31mFailed\033[0m\n", src);
		printf("ft_strlcat function returns: %s\nReturned value: %zu\n", dst_ft, returned_ft);
		printf("Built-In function returns: %s\nReturned value: %zu\n", dst_builtin, returned_builtin);
	}

}

void	test_strlcat(void)
{
	const char	string_src_1[] = "";
	const char	string_src_2[] = "Hello World";
	const char	string_src_3[] = "]";
	const char	string_src_4[] = "T";
	const char	string_src_5[] = "...yet another test";
	char	dest_buffer_ft_1[] = "a";
	char	dest_buffer_ft_2[] = "Exa";
	char	dest_buffer_ft_3[] = "";
	char	dest_buffer_ft_4[] = "This is for testing";
	char	dest_buffer_ft_5[] = "Last test";
	char	dest_buffer_builtin_1[] = "a";
	char	dest_buffer_builtin_2[] = "Exa";
	char	dest_buffer_builtin_3[] = "";
	char	dest_buffer_builtin_4[] = "This is for testing";
	char	dest_buffer_builtin_5[] = "Last test";

	printf("--- Tests for 'ft_strlcat' function ---\n");
	test(dest_buffer_ft_1, dest_buffer_builtin_1, string_src_1, sizeof(dest_buffer_ft_1));	
	test(dest_buffer_ft_2, dest_buffer_builtin_2, string_src_2, sizeof(dest_buffer_ft_2));
	test(dest_buffer_ft_3, dest_buffer_builtin_3, string_src_3, sizeof(dest_buffer_ft_3));
	test(dest_buffer_ft_4, dest_buffer_builtin_4, string_src_4, sizeof(dest_buffer_ft_4));
	test(dest_buffer_ft_5, dest_buffer_builtin_5, string_src_5, sizeof(dest_buffer_ft_5));
	printf("--- End of tests for 'ft_strlcat' ---\n\n\n");
}

