/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:23:37 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/19 19:28:41 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	t;

	t = 0;
	if (dstsize > 0)
	{
		while (t < dstsize - 1 && src[t] != '\0')
		{
			dst[t] = src[t];
			t++;
		}
		dst[t] = '\0';
	}
	while (src[t] != '\0')
	{
		t++;
	}
	return (t);
}

// #include<stdio.h>
// #include<string.h>

// int main(void)
// {
// 	char s1[] = "123456789";
// 	char s2[] = "abcde";
// 	char t1[] = "123456789";
// 	char t2[] = "abcde";
// 	int len = 10;
// 	int i = ft_strlcpy(s1, s2, len);
// 	int j = strlcpy(t1, t2, len);

// 	printf("ft\nlen: %d\nreturn: %d\ns1: %s\n", len, i, s1);
// 	printf("original\nlen: %d\nreturn: %d\nt1: %s\n", len, j, t1);

// 	return (0);
// }
