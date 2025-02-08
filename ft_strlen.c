/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:26:16 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/17 17:36:43 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}

// #include<stdio.h>
// #include<string.h>

// int main(void)
// {
// 	char *s1 = "hello";
// 	char *s2 = NULL;
// 	char *s3 = "\n\t";
// 	char *s4 = "     ";
// 	char *s5 = "123456789";

// 	printf("ft: %lu, %lu, %lu, %lu, %lu\n",
// 	ft_strlen(s1), ft_strlen(s2), ft_strlen(s3),
// 	ft_strlen(s4), ft_strlen(s5));
// 	printf("original: %lu, %lu, %lu, %lu, %lu\n",
// 	strlen(s1), strlen(s2), strlen(s3),
// 	strlen(s4), strlen(s5));

// 	return (0);
// }