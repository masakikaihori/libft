/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:31:56 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/15 13:26:53 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*memory;
	unsigned char	*zeroset;
	size_t			t;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (count > SIZE_MAX / size)
		return (NULL);
	memory = (void *)malloc(count * size);
	if (memory == NULL)
		return (NULL);
	zeroset = (unsigned char *)memory;
	t = 0;
	while (t < count * size)
	{
		zeroset[t] = 0;
		t++;
	}
	return (memory);
}

// #include<stdio.h>

// int main(void)
// {
// 	long *ft;
// 	long *ori;
// 	long *mal;

// 	ft = (long *)ft_calloc(3, sizeof(long));
// 	ori = (long *)calloc(3, sizeof(long));
// 	mal = (long *)malloc(sizeof(long) * 3);

// 	printf("ft: [0]:0x%08ld, [1]:0x%08ld, [2]:0x%08ld\n",
// 	ft[0], ft[1], ft[2]);
// 	printf("or: [0]:0x%08ld, [1]:0x%08ld, [2]:0x%08ld\n",
// 	ori[0], ori[1], ori[2]);
// 	printf("mal: [0]:0x%08ld, [1]:0x%08ld, [2]:0x%08ld\n",
// 	mal[0], mal[1], mal[2]);

// 	free(ft);
// 	free(ori);
// 	free(mal);

// 	return (0);
// }