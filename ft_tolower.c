/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:29:09 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/03 20:28:42 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

// #include<stdio.h>
// #include<ctype.h>

// int main(void)
// {
// 	char c1 = 'a';
// 	char c2 = 'z';
// 	char c3 = 'A';
// 	char c4 = 'Z';
// 	char c5 = '!';

// 	printf("ft: %c, %c, %c, %c, %c\n",
// 	ft_tolower(c1), ft_tolower(c2), ft_tolower(c3),
// 	ft_tolower(c4), ft_tolower(c5));
// 	printf("original: %c, %c, %c, %c, %c\n",
// 	tolower(c1), tolower(c2), tolower(c3),
// 	tolower(c4), tolower(c5));

// 	return (0);
// }