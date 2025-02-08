/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:22:21 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/17 16:17:40 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// #include<stdio.h>
// #include<ctype.h>

// int main(void)
// {
// 	unsigned char c1 = '1';
// 	unsigned char c2 = 'a';
// 	unsigned char c3 = 'Z';
// 	unsigned char c4 = ' ';
// 	unsigned char c5 = '\n';

// 	printf("ft: %d, %d, %d, %d, %d\n",
// 	ft_isprint(c1), ft_isprint(c2), ft_isprint(c3),
// 	ft_isprint(c4), ft_isprint(c5));
// 	printf("original: %d, %d, %d, %d, %d\n",
// 	isprint(c1), isprint(c2), isprint(c3),
// 	isprint(c4), isprint(c5));

// 	return (0);
// }