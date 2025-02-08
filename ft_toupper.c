/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:27:01 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/03 20:28:45 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
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
// 	ft_toupper(c1), ft_toupper(c2), ft_toupper(c3),
// 	ft_toupper(c4), ft_toupper(c5));
// 	printf("original: %c, %c, %c, %c, %c\n",
// 	toupper(c1), toupper(c2), toupper(c3),
// 	toupper(c4), toupper(c5));

// 	return (0);
// }