/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:57:33 by rohoffma          #+#    #+#             */
/*   Updated: 2024/05/24 15:23:43 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>
#include <stdio.h>
#include <stddef.h>

static	void	test(const char *s, char c, char **test)
{
	char	**splitted_array;
	int	i;

	i = 0;
	splitted_array = ft_split(s, c);
	if ((splitted_array == NULL && test == NULL) || (splitted_array[i] == NULL && test[i] == NULL))
		printf("Test for string '%s' splitting at '%c': \033[0;32mPassed\033[0m\n", s, c);
	else if ((splitted_array == NULL || test == NULL) || (splitted_array[i] == NULL && test[i] == NULL))
		printf("Test for string '%s' splitting at '%c': \033[0;31mFailed\033[0m\n", s, c);
	else
	{
		while (splitted_array[i] != NULL)
		{
			if (strncmp(splitted_array[i], test[i], ft_strlen(splitted_array[i]) * sizeof(char)) != 0)
			{
				printf("Test for string '%s' splitting at '%c': \033[0;31mFailed\033[0m\n", s, c);
				printf("Substring '%s' should equal to '%s'\n", splitted_array[i], test[i]);
				break;
			} 
			else if ((strncmp(splitted_array[i], test[i], ft_strlen(splitted_array[i]) * sizeof(char)) == 0) && splitted_array[i + 1] == NULL && test[i + 1] == NULL)
			{
				printf("Test for string '%s' splitting at '%c': \033[0;32mPassed\033[0m\n", s, c);
				break;
			}
			else if ((strncmp(splitted_array[i], test[i], ft_strlen(splitted_array[i]) * sizeof(char)) == 0) && (splitted_array[i + 1] == NULL || test[i + 1] == NULL))
			{
				printf("Test for string '%s' splitting at '%c': \033[0;31mFailed\033[0m\n", s, c);
				printf("Substring at i '%s' should equal to '%s'\n", splitted_array[i], test[i]);
				//printf("Substring at i + 1 '%s' should equal to '%s'\n", splitted_array[i + 1], test[i + 1]);
				break;
			}
			i++;
		}
	}
}

void	test_split(void)
{
	const char	s1[] = "";
	const char	s2[] = "Hello World1";
	const char	s3[] = "Hello World2";
	const char	s4[] = "";
	const char	s5[] = "separating s s and more ds";
	const char	s6[] = "onewordseparatingatd";
	const char	s7[] = "noseparation";
	const char	s8[] = "\0aa\0bbb";

	char		c1 = ' ';
	char		c2 = ' ';
	char		c3 = ' ';
	char		c4 = ' ';
	char		c5 = 's';
	char		c6 = 'd';
	char		c7 = 'z';
	char		c8 = '\0';

	char		*test1[] = {"", NULL};
	char		*test2[] = {"Hello", "World1", NULL};
	char		*test3[] = {"Hello", "World2", NULL};
	char		*test4[] = {"", NULL};
	char		*test5[] = {"eparating ", " ", " and more d", NULL};
	char		*test6[] = {"onewor", "separatingat", NULL};
	char		*test7[] = {"noseparation", NULL};
	char		*test8[] = {NULL, NULL};

	printf("--- Tests for 'ft_split' function ---\n");
	test(s1, c1, test1);
	test(s2, c2, test2);
	test(s3, c3, test3);
	test(s4, c4, test4);
	test(s5, c5, test5);
	test(s6, c6, test6);
	test(s7, c7, test7);
	test(s8, c8, test8);
	printf("--- End of tests for 'ft_split' ---\n\n\n");
}

