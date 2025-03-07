/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:57:45 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/15 13:26:07 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			t;
	unsigned char	*ptr;

	t = 0;
	ptr = s;
	while (t < n)
	{
		ptr[t] = 0;
		t++;
	}
	return ;
}

// #include<stdio.h>
// #include<string.h>

// int main(void)
// {
// 	char s1[] = "123456789";
// 	char s2[] = "12345";
// 	char s3[] = "12";
// 	char t1[] = "123456789";
// 	char t2[] = "12345";
// 	char t3[] = "12";
// 	size_t len = 3;	

// 	ft_bzero(s1, len);
// 	ft_bzero(s2, len);
// 	ft_bzero(s3, len);
// 	bzero(t1, len);
// 	bzero(t2, len);
// 	bzero(t3, len);

// 	printf("ft:\n%s\n%s\n%s\n", s1, s2, s3);
// 	printf("original:\n%s\n%s\n%s\n", t1, t2, t3);

// 	return (0);
// }