/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:23:05 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/03 20:26:45 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include<stdio.h>
// #include<ctype.h>

// int main(void)
// {
// 	unsigned char c1 = '0';
// 	unsigned char c2 = '`';
// 	unsigned char c3 = 'z';
// 	unsigned char c4 = '\n';
// 	int c5 = 128;

// 	printf("ft: : %d, %d, %d, %d, %d\n",
// 	ft_isascii(c1), ft_isascii(c2), ft_isascii(c3),
// 	ft_isascii(c4), ft_isascii(c5));
// 	printf("original: %d, %d, %d, %d, %d\n",
// 	isascii(c1), isascii(c2), isascii(c3),
// 	isascii(c4), isascii(c5));

// 	return (0);
// }