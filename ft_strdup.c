/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:06:29 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/06 14:24:53 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	t;

	t = 0;
	while (s1[t] != '\0')
		t++;
	copy = (char *)malloc(sizeof(char) * (t + 1));
	if (!copy)
		return (NULL);
	copy[t] = '\0';
	if (t == 0)
		return (copy);
	while (--t >= 0)
	{
		copy[t] = s1[t];
		if (t == 0)
			break ;
	}
	return (copy);
}

// #include<stdio.h>
// #include<string.h>

// int main(void)
// {
// 	char *s1 = "";
// 	char *s2 = ft_strdup(s1);
// 	char *s3 = strdup(s1);

// 	printf("ft: %s\n", s2);
// 	printf("original; %s\n", s3);

// 	free(s2);
// 	free(s3);

// 	return (0);
// }