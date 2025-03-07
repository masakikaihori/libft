/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:59:15 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/06 14:24:21 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			t;
	unsigned char	*ptr;

	t = 0;
	ptr = b;
	while (t < len)
	{
		ptr[t] = c;
		t++;
	}
	return (b);
}

// #include<stdio.h>
// #include<string.h>

// int main(void)
// {
// 	int len = 3;
// 	char x = 'x';
// 	char s1[] = "123456789";
// 	char s2[] = "12345";
// 	// char s3[] = "123";
// 	char t1[] = "123456789";
// 	char t2[] = "12345";
// 	//char t3[] = "123";

// 	ft_memset(s1, x, len);
// 	ft_memset(s2, x, len);
// 	//ft_memset(s3, x, len);
// 	memset(t1, x, len);
// 	memset(t2, x, len);

// 	printf("ft:\n%s\n%s\n", s1, s2);
// 	printf("original:\n%s\n%s\n", t1, t2);

// 	return (0);
// }