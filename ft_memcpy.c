/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:30:08 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/19 18:30:56 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				t;
	unsigned char		*ptr_dst;
	const unsigned char	*ptr_src;

	t = 0;
	ptr_dst = dst;
	ptr_src = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (t < n)
	{
		ptr_dst[t] = ptr_src[t];
		t++;
	}
	return (dst);
}

// #include<stdio.h>
// #include<string.h>

// int main(void)
// {
// 	//char dest1[] = "0123456789ab";
// 	//char dest2[] = "0123456789ab";
// 	char *dest1 = NULL;
// 	char *dest2 = NULL;
// 	//char src[] = "qwertyuio";
// 	//int len = 7;

// 	//ft_memcpy(dest2, dest1, 7);
// 	memcpy(dest2, dest1, 7);

// 	//printf("ft      : %s\n", dest1);
// 	printf("original: %s\n", dest2);

// 	return (0);
// }
