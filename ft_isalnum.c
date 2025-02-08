/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:54:36 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/03 20:29:13 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'));
}

// #include<stdio.h>
// #include<ctype.h>

// int main(void)
// {
// 	unsigned char c1 = '5';
// 	unsigned char c2 = 'a';
// 	unsigned char c3 = 'X';
// 	unsigned char c4 = ' ';
// 	unsigned char c5 = '\t';

// 	printf("ft: %d, %d, %d, %d, %d\n",
// 	ft_isalnum(c1), ft_isalnum(c2), ft_isalnum(c3),
// 	ft_isalnum(c4), ft_isalnum(c5));
// 	printf("original: %d, %d, %d, %d, %d\n",
// 	isalnum(c1), isalnum(c2), isalnum(c3),
// 	isalnum(c4), isalnum(c5));

// 	return (0);
// }