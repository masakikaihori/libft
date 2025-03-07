/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:35:00 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/06 14:24:08 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;
	size_t			t;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	t = 0;
	while (t < n)
	{
		if (ptr_s1[t] - ptr_s2[t])
			return (ptr_s1[t] - ptr_s2[t]);
		t++;
	}
	return (0);
}

// #include<stdio.h>
// #include<string.h>

// int main(void)
// {
// 	char *s1 = "\xff\xaa\xde\xffMACOSX\xff";
// 	char *s2 = "\xff\xaa\xde\x02";
// 	int len = 20;

// 	printf("ft: %d\n", ft_memcmp(s1, s2, len));
// 	printf("original: %d\n", memcmp(s1, s2, len));

// 	return (0);
// }