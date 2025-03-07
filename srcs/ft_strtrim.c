/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <nana7hachi89gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:34:18 by mkaihori          #+#    #+#             */
/*   Updated: 2024/12/28 17:32:50 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/libft.h"

static int	get_start(char const *s1, char const *set);
static int	get_end(char const *s1, char const *set);
static int	isset(char c, char const *set);
static int	trimming(int start, int end, char *trimmed, char const *s1);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		start;
	int		end;
	int		i;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char *)s1);
	start = get_start(s1, set);
	end = get_end(s1, set);
	if ((end - start) < 0)
		trimmed = (char *)malloc(sizeof(char) * 1);
	else
		trimmed = (char *)malloc(sizeof(char) * (end - start + 2));
	if (trimmed == NULL)
		return (NULL);
	i = 0;
	if ((end - start) >= 0)
		i = trimming(start, end, trimmed, s1);
	trimmed[i] = '\0';
	return (trimmed);
}

static int	get_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (isset(s1[i], set) == 0)
			return (i);
		i++;
	}
	return (i);
}

static int	get_end(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	i -= 1;
	while (i >= 0)
	{
		if (isset(s1[i], set) == 0)
			return (i);
		i--;
	}
	return (i);
}

static int	isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	trimming(int start, int end, char *trimmed, char const *s1)
{
	int	i;

	i = 0;
	while (i < (end - start + 1))
	{
		trimmed[i] = s1[start + i];
		i++;
	}
	return (i);
}

// #include<stdio.h>

// int main(void)
// {
// 	char *s1 = "1234aaa1a3123";
// 	char *set = "1234";

// 	printf("%s\n", ft_strtrim(s1, set));

// 	return (0);
// }