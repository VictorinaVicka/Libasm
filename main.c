/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 15:11:46 by tfarenga          #+#    #+#             */
/*   Updated: 2020/08/18 14:17:20 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

#include <string.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

void test()
{
	char *str1 = "12";
	char *str2 = "1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890|";

	printf("---FT_STRLEN---\n");
	printf("True = %lu\n", strlen(str1));
	printf("My   = %lu\n", ft_strlen(str1));
	printf("True = %lu\n", strlen(str2));
	printf("My   = %lu\n", ft_strlen(str2));

	printf("---FT_STRCPY---\n");
	char *str3 = malloc(2);
	char *str4 = malloc(101);
	char *dst1 = malloc(2);
	char *dst2 = malloc(101);

	printf("True = %s\n", strcpy(str3, str1));
	printf("My   = %s\n", ft_strcpy(dst1, str1));
	printf("True = %s\n", strcpy(str4, str2));
	printf("My   = %s\n", ft_strcpy(dst2, str2));

	printf("---FT_STRCMP---\n");
	char *str5 = "";
	char *str6 = "cmp";

	printf("True = %d\n", strcmp(str5, str6));
	printf("My   = %d\n", ft_strcmp(str5, str6));
	printf("True = %d\n", strcmp(str6, str5));
	printf("My   = %d\n", ft_strcmp(str6, str5));
	printf("True = %d\n", strcmp(str5, str5));
	printf("My   = %d\n", ft_strcmp(str5, str5));
	printf("True = %d\n", strcmp(str6, str6));
	printf("My   = %d\n", ft_strcmp(str6, str6));
}

int main()
{
	test();
	return (0);
}
