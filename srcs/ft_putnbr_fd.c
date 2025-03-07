/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:59:28 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/06 14:24:34 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		digit;
	long long	num;

	num = n;
	if (num < 0)
	{
		num = -num;
		write(fd, "-", 1);
	}
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	digit = num % 10 + '0';
	write(fd, &digit, 1);
}

// #include<limits.h>

// int main(void)
// {
// 	ft_putnbr_fd(INT_MIN, 1);
// 	return (0);
// }