/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:30:58 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/06 14:25:26 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*temp;

	temp = NULL;
	while (c > 255)
		c -= 256;
	while (c < 0)
		c += 256;
	while (*s)
	{
		if (*s == c)
			temp = s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return ((char *)temp);
}

// #include<stdio.h>
// #include<string.h>

// int main(void)
// {
// 	char *s1 = "libft-test-tokyo";
// 	char c = '1';

// 	printf("ft: %s\n", ft_strrchr(s1, c));
// 	printf("original: %s\n", strrchr(s1, c));

// 	return (0);
// }