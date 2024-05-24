/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:10:20 by rohoffma          #+#    #+#             */
/*   Updated: 2024/05/21 13:31:43 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <bsd/string.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

static	void	test(char *dst_ft, char *dst_builtin, const char *src, size_t zs)
{
	if ((ft_strlcpy(dst_ft, src, zs) == strlcpy(dst_builtin, src, zs)) && strncmp(dst_ft, dst_builtin, zs) == 0)
	{
		printf("Test for string '%s': \033[0;32mPassed\033[0m\n", src);
	}
	else
	{
		printf("Test for string '%s': \033[0;31mFailed\033[0m\n", src);
		printf("ft_strlen function returns: %s\n", dst_ft);
		printf("Built-In function returns: %s\n", dst_builtin);
	}

}

void	test_strlcpy(void)
{
	const char	string_src_1[] = "";
	const char	string_src_2[] = "Hello World";
	const char	string_src_3[] = "]";
	const char	string_src_4[] = " ";
	const char	string_src_5[] = "...yet another test    ";
	char	dest_buffer_ft_1[1];
	char	dest_buffer_ft_2[5];
	char	dest_buffer_ft_3[0];
	char	dest_buffer_ft_4[5];
	char	dest_buffer_ft_5[20];
	char	dest_buffer_builtin_1[1];
	char	dest_buffer_builtin_2[5];
	char	dest_buffer_builtin_3[0];
	char	dest_buffer_builtin_4[5];
	char	dest_buffer_builtin_5[20];

	printf("--- Tests for 'ft_strlcpy' function ---\n");
	test(dest_buffer_ft_1, dest_buffer_builtin_1, string_src_1, sizeof(dest_buffer_ft_1));	
	test(dest_buffer_ft_2, dest_buffer_builtin_2, string_src_2, sizeof(dest_buffer_ft_2));
	test(dest_buffer_ft_3, dest_buffer_builtin_3, string_src_3, sizeof(dest_buffer_ft_3));
	test(dest_buffer_ft_4, dest_buffer_builtin_4, string_src_4, sizeof(dest_buffer_ft_4));
	test(dest_buffer_ft_5, dest_buffer_builtin_5, string_src_5, sizeof(dest_buffer_ft_5));
	printf("--- End of tests for 'ft_strlcpy' ---\n\n\n");
}

