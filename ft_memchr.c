/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:33:32 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/15 20:18:46 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			t;
	unsigned char	*str;

	t = 0;
	while (c < 0)
		c += 256;
	while (c > 255)
		c -= 256;
	str = (unsigned char *)s;
	while (t < n)
	{
		if (str[t] == c)
			return ((void *)str + t);
		t++;
	}
	return (NULL);
}

// #include<stdio.h>
// #include<string.h>

// int main(void)
// {
// 	char *s = "/|\x12\xff\x09\x42\2002\42|\\";
// 	//char c = 's';
// 	const int len = 10;

// 	printf("ft: %s\n", ft_memchr(s, '\200', len));
// 	printf("original: %s\n", memchr(s, '\200', len));
// 	printf("%d\n", 'a');

// 	return (0);
// }