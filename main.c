/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 15:11:46 by tfarenga          #+#    #+#             */
/*   Updated: 2020/08/17 16:34:15 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

#include <string.h>
#include <fcntl.h>
#include <stdio.h>

void test()
{
	char *str1 = "";
	char *str2 = "1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890";

	printf("---FT_STRLEN---\n");
	printf("True = %lu\n", strlen(str1));
	printf("Test = %lu\n", ft_strlen(str1));
	printf("True = %lu\n", strlen(str2));
	printf("Test = %lu\n", ft_strlen(str2));
}

int main()
{
	test();
	return (0);
}
