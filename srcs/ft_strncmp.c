/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:32:12 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/06 14:25:18 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	t;

	t = 0;
	while (t < n && (s1[t] != '\0' && s2[t] != '\0'))
	{
		if ((unsigned char)s1[t] - (unsigned char)s2[t])
			return ((unsigned char)s1[t] - (unsigned char)s2[t]);
		t++;
	}
	if (t < n)
		return ((unsigned char)s1[t] - (unsigned char)s2[t]);
	return (0);
}

// #include<stdio.h>
// #include<string.h>

// int main(void)
// {
// 	char *s1 = "\x12\xff\x65\x12\xbd\xde\xad";
// 	char *s2 = "\x12\x02";
// 	int len = 6;

// 	printf("ft: %d\n", ft_strncmp(s1, s2, len));
// 	printf("original: %d\n", strncmp(s1, s2, len));
// 	printf("%d\n", (unsigned char)s1[1]);
// 	printf("%d\n", (unsigned char)s2[1]);

// 	return (0);
// }