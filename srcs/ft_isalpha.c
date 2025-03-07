/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:40:37 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/03 20:29:17 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// #include<stdio.h>
// #include<ctype.h>

// int	main(void)
// {
// 	unsigned char c1 = 'a';
// 	unsigned char c2 = ' ';
// 	unsigned char c3 = 'Z';
// 	unsigned char c4 = '\n';
// 	unsigned char c5 = '5';

// 	printf("ft: %d, %d, %d, %d, %d\n",
// 	ft_isalpha(c1), ft_isalpha(c2), ft_isalpha(c3),
// 	ft_isalpha(c4), ft_isalpha(c5));
// 	printf("original: %d, %d, %d, %d, %d\n",
// 	isalpha(c1), isalpha(c2), isalpha(c3),
// 	isalpha(c4), isalpha(c5));
// 	return (0);
// }