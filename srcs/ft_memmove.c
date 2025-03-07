/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:06:59 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/19 18:52:01 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/libft.h"

static void	d_memmove(unsigned char *ptr_dst,
				const unsigned char *ptr_src, size_t len);
static void	s_memmove(unsigned char *ptr_dst,
				const unsigned char *ptr_src, size_t len);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ptr_dst;
	const unsigned char	*ptr_src;

	ptr_dst = dst;
	ptr_src = src;
	if (len == 0)
		return (dst);
	len -= 1;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst <= src)
		d_memmove(ptr_dst, ptr_src, len);
	else
		s_memmove(ptr_dst, ptr_src, len);
	return (dst);
}

static void	d_memmove(unsigned char *ptr_dst,
				const unsigned char *ptr_src, size_t len)
{
	size_t	t;

	t = 0;
	while (t <= len)
	{
		ptr_dst[t] = ptr_src[t];
		t++;
	}
}

static void	s_memmove(unsigned char *ptr_dst,
				const unsigned char *ptr_src, size_t len)
{
	size_t	t;

	t = 0;
	while (t <= len && len != 0)
	{
		ptr_dst[len] = ptr_src[len];
		len--;
	}
	ptr_dst[len] = ptr_src[len];
}

// #include<stdio.h>
// #include<string.h>

// int main(void)
// {
// 	unsigned char s1[] = "0123456789abcdef";
// 	unsigned char t1[] = "abcdef";
// 	unsigned char s2[] = "0123456789abcdef";
// 	unsigned char t2[] = "abcdef";
// 	const size_t len = 3;

// 	ft_memmove(s1, t1, len);
// 	memmove(s2, t2, len);

// 	printf("1:%s\n", s1);
// 	printf("2:%s\n", s2);

// 	return (0);
// }
