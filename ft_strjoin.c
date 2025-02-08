/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:05:14 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/23 16:14:32 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	strlens(char const *s1, char const *s2);
static int		make_str(char *str, char const *s, int i, int j);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(char) * (strlens(s1, s2) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	if (s1 != NULL)
		i = make_str(str, s1, 0, 0);
	if (s2 != NULL)
		i = make_str(str, s2, i, 0);
	str[i] = '\0';
	return (str);
}

static size_t	strlens(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;

	len1 = 0;
	len2 = 0;
	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}
	return (len1 + len2);
}

static int	make_str(char *str, char const *s, int i, int j)
{
	while (s[j] != '\0')
	{
		str[i] = s[j];
		i++;
		j++;
	}
	return (i);
}

// #include<stdio.h>

// int main(void)
// {
// 	char *s1 = "hello";
// 	char *s2 = "world";
// 	char *str = ft_strjoin(s1, s2);

// 	printf("%s\n", str);

// 	free(str);

// 	return (0);
// }