/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:36:10 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/06 14:25:22 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	t;
	size_t	u;

	t = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (haystack[t] != '\0')
	{
		u = 0;
		if (haystack[t] == needle[u])
		{
			while (haystack[t + u] == needle[u] && t + u < len && needle[u])
				u++;
			if (needle[u] == '\0')
				return ((char *)haystack + t);
		}
		t++;
	}
	return (NULL);
}

// #include<stdio.h>
// #include<string.h>

// int main(void)
// {
// 	char *haystack = "libft-test-tokyo";
// 	char *needle = "libft-test-tokyo";
// 	int len = 1;

// 	printf("ft: %s\n", ft_strnstr(haystack, needle, len));
// 	printf("original: %s\n", strnstr(haystack, needle, len));
// 	return (0);
// }

// int main(void)
// {
// 	char *str = "libft-test-tokyo";
// 	int	len = strlen(str);
// 	for (int i = 0; i < len; i++)
// 	{
// 		printf("%d\n", i + 1);
// 		printf("ft: %s\n", ft_strnstr(str, "", i));
// 		printf("or: %s\n", strnstr(str, "", i));
// 		printf("ft: %s\n", ft_strnstr(str, "libft-test-tokyo", i));
// 		printf("or: %s\n", strnstr(str, "libft-test-tokyo", i));
// 		printf("ft: %s\n", ft_strnstr(str, "libft", i));
// 		printf("or: %s\n", strnstr(str, "libft", i));
// 		printf("ft: %s\n", ft_strnstr(str, "test", i));
// 		printf("or: %s\n", strnstr(str, "test", i));
// 		printf("ft: %s\n", ft_strnstr(str, "tokyo", i));
// 		printf("or: %s\n", strnstr(str, "tokyo", i));
// 		printf("ft: %s\n", ft_strnstr(str, "libft~", i));
// 		printf("or: %s\n", strnstr(str, "libft~", i));
// 		printf("ft: %s\n", ft_strnstr(str, "z", i));
// 		printf("or: %s\n", strnstr(str, "z", i));
// 	}
// }