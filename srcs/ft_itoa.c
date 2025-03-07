/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:04:30 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/06 14:23:32 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/libft.h"

static int	get_len(int n);
static int	get_abs(int i);

char	*ft_itoa(int n)
{
	char	*num_str;
	int		len;

	len = get_len(n);
	num_str = (char *)malloc(sizeof(char) * (len + 1));
	if (num_str == NULL)
		return (NULL);
	num_str[len] = '\0';
	if (n == 0)
		num_str[0] = '0';
	if (n < 0)
		num_str[0] = '-';
	while (n != 0)
	{
		num_str[--len] = get_abs((n % 10)) + '0';
		n /= 10;
	}
	return (num_str);
}

static int	get_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static int	get_abs(int i)
{
	if (i < 0)
		return (-i);
	return (i);
}

// #include<stdio.h>
// #include<limits.h>

// int main(void)
// {
// 	const int i = INT_MIN;

// 	printf("%d\n", i);
// 	printf("%d\n", get_len(i));
// 	printf("%s\n", ft_itoa(i)); 

// 	return (0);
// }