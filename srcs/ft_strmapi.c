/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:14:00 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/06 14:25:13 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/libft.h"

//static char a_to_alpha(unsigned int i, char c);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		index;
	char	*str;

	index = 0;
	if (s == NULL)
		return (NULL);
	while (s[index] != '\0')
		index++;
	str = (char *)malloc(sizeof(char) * (index + 1));
	if (!str)
		return (NULL);
	str[index] = '\0';
	while (--index >= 0)
		str[index] = f(index, s[index]);
	return (str);
}

//static char a_to_alpha(unsigned int i, char c)
//{
//	return (c + i);
//}

// #include<stdio.h>

// int main(void)
// {
// 	char *s1 = "aaaaaaaaaa";

// 	printf("%s\n", ft_strmapi(s1, a_to_alpha));

// 	return (0);
// }