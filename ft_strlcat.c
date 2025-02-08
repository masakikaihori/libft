/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:25:18 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/23 16:13:48 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	t;
	size_t	u;

	t = 0;
	u = 0;
	if (dst || dstsize != 0)
	{
		while (dst[t] != '\0')
			t++;
		if (t < dstsize)
		{
			while (t + u < dstsize - 1 && src[u] != '\0')
			{
				dst[t + u] = src[u];
				u++;
			}
			dst[t + u] = '\0';
			while (src[u] != '\0')
				u++;
			return (t + u);
		}
	}
	while (src[u] != '\0')
		u++;
	return (u + dstsize);
}

// #include<stdio.h>
// #include<string.h>

// int main(void)
// {
// 	char s1[20] = "hello";
// 	//char s2[0xF] = "nyan !";
// 	// char t1[20] = "hello";
// 	char t2[0xF] = "nyan !";
// 	const int len = 7;
// 	//int i = ft_strlcat(NULL, s2, len);
// 	int j = strlcat(s1, t2, len);

// 	//printf("ft\ns1: %s\nlen: %d\nreturn: %d\n", NULL, len, i);
// 	printf("original\ns1: %s\nlen: %d\nreturn: %d\n", s1, len, j);

// 	return (0);
// }