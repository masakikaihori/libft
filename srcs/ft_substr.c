/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:25:56 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/06 14:25:57 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
		i++;
	if (i < len + start && i > start)
		len = i - start;
	else if (i <= start)
		len = 0;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (s[start + i] != '\0' && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

//#include<stdio.h>
//#include<string.h>

//int main(void)
//{
// 	//char *s = "libft-test-tokyo";
// 	char *t = "libft-test-tokyo";
// 	char *str = ft_substr(t, 10, 10);

//	printf("%s\n", str);

//	free(str);

//	return (0);
//}