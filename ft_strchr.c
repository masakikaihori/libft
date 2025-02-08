/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:30:02 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/06 14:24:49 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (c > 255)
		c -= 256;
	while (c < 0)
		c += 256;
	while (*s)
	{
		if (c == *s)
			return ((char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (NULL);
}

// #include<stdio.h>
// #include<string.h>

// int main(void)
// {
//  	char *s1 = "libft-test-tokyo";
// 	int c1 = 'i' - 256;
//  	char *s2 = "libft-test-tokyo";
// 	int c2 = 'i' - 256;

// 	printf("ft: %s\n", ft_strchr(s1, c1));
// 	printf("original: %s\n", strchr(s2, c2));
// 	printf("%d\n", c1);

// 	return (0);
// }