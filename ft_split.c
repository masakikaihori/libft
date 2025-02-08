/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:29:57 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/15 13:20:58 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int		get_amount(char const *s, char c);
static int		issplit(char c, char split);
static char		*make_str(char const *s, char c);
static char		**make_strs(char const *s, char c, char **strs);

char	**ft_split(char const *s, char c)
{
	char	**strs;

	if (s == NULL)
		return (NULL);
	strs = (char **)malloc(sizeof(char *) * (get_amount(s, c) + 1));
	if (strs == NULL)
		return (NULL);
	strs[get_amount(s, c)] = NULL;
	strs = make_strs(s, c, strs);
	if (strs == NULL)
	{
		free(strs);
		return (NULL);
	}
	return (strs);
}

static int	get_amount(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s != '\0' && (issplit(*s, c)))
			s++;
		if (*s != '\0' && !(issplit(*s, c)))
			count++;
		while (*s != '\0' && !(issplit(*s, c)))
			s++;
	}
	return (count);
}

static int	issplit(char c, char split)
{
	if (c == split)
		return (1);
	return (0);
}

static char	**make_strs(char const *s, char c, char **strs)
{
	int	index;

	index = 0;
	while (*s)
	{
		while (*s != '\0' && issplit(*s, c))
			s++;
		if (*s != '\0' && !(issplit(*s, c)))
		{
			strs[index] = make_str(s, c);
			if (strs[index] == NULL)
			{
				while (--index >= 0)
					free(strs[index]);
				return (NULL);
			}
			index++;
		}
		while (*s != '\0' && !(issplit(*s, c)))
			s++;
	}
	return (strs);
}

static char	*make_str(char const *s, char c)
{
	char	*str;
	int		len;

	len = 0;
	while (s[len] != '\0' && !(issplit(s[len], c)))
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while (--len >= 0)
		str[len] = s[len];
	return (str);
}

// #include<stdio.h>

// int main(void)
// {
// 	char *s = "with great power there must also come -- great responsibility!";
// 	char c = ' ';
// 	char **strs = ft_split(s, c);

// 	for (int i = 0; strs[i] != NULL; i++)
// 		printf("%s\n", strs[i]);
// 	return (0);
// }