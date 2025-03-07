/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:40:52 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/03 20:26:49 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// #include<stdio.h>
// #include<ctype.h>

// int main(void)
// {
// 	unsigned char c1 = '0';
// 	unsigned char c2 = ' ';
// 	unsigned char c3 = 'Z';
// 	unsigned char c4 = '\n';
// 	unsigned char c5 = '5';

// 	printf("ft: %d, %d, %d, %d, %d\n",
// 	ft_isdigit(c1), ft_isdigit(c2), ft_isdigit(c3),
// 	ft_isdigit(c4), ft_isdigit(c5));
// 	printf("original: %d, %d, %d, %d, %d\n",
// 	isdigit(c1), isdigit(c2), isdigit(c3),
// 	isdigit(c4), isdigit(c5));
// 	return (0);
// }