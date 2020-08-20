/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 15:11:46 by tfarenga          #+#    #+#             */
/*   Updated: 2020/08/20 14:04:13 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

#include <string.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void	ft_errno(void)
{
	if (errno != 0)
	{
		printf("errno: %d\n", errno);
		perror("Error");
		errno = 0;
	}
}

void	test()
{
	char *str1 = "6";
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

	printf("---FT_WRITE---\n");
	char	a = '1';
	char	*s2 = " 1ABc\n";

	printf("True:\n");
	write(1, &a, 1);
	write(1, "\n", 1);
	write(1, s2, ft_strlen(s2));
	write(-1, s2, ft_strlen(s2));
	ft_errno();

	printf("My:\n");
	ft_write(1, &a, 1);
	ft_write(1, "\n", 1);
	ft_write(1, s2, ft_strlen(s2));
	ft_write(-1, s2, ft_strlen(s2));
	ft_errno();

	printf("---FT_READ---\n");
	char	buffer1[1000];
	char	buffer2[1000];
	int		fd = open("text.txt", O_RDONLY);

	read(fd, buffer1, 1000);
	printf("True = %s\n", buffer1);
	ft_errno();
	close(fd);
	fd = open("text.txt", O_RDONLY);
	ft_read(fd, buffer2, 1000);
	printf("My   = %s\n", buffer2);
	ft_errno();
	close(fd);

	printf("---FT_STRDUP---\n");
	char	*ds = "Test";

	printf("True = %s\n", strdup(ds));
	printf("My   = %s\n", ft_strdup(ds));
	printf("True = %s\n", strdup("OK"));
	printf("My   = %s\n", ft_strdup("OK"));
	printf("True = %s\n", strdup(str5));
	printf("My   = %s\n", ft_strdup(str5));
	printf("True = %s\n", strdup(str2));
	printf("My   = %s\n", ft_strdup(str2));
}

int main()
{
	test();
	return (0);
}
