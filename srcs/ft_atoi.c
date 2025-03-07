/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:36:44 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/11 17:08:31 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/libft.h"

static long	make_result(int neg, const char *str, int i);
static long	get_abs(long min);

int	ft_atoi(const char *str)
{
	long	i;
	int		neg;
	long	result;

	i = 0;
	neg = 1;
	while (str[i] != '\0' && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	result = make_result(neg, str, i);
	return ((int)result);
}

static long	make_result(int neg, const char *str, int i)
{
	long	result;
	long	long_div_ten;
	long	max_mod_ten;
	long	min_mod_ten;

	long_div_ten = LONG_MAX / 10;
	max_mod_ten = LONG_MAX % 10;
	min_mod_ten = get_abs(LONG_MIN % 10);
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (neg == 1 && (result > long_div_ten
				|| ((result == long_div_ten) && (str[i] - '0') > max_mod_ten)))
			return (LONG_MAX);
		if (neg == -1 && (result > long_div_ten
				|| ((result == long_div_ten) && (str[i] - '0') >= min_mod_ten)))
			return (LONG_MIN);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * neg);
}

static long	get_abs(long min)
{
	if (min < 0)
		return (-min);
	return (min);
}

// #include<stdio.h>
// #include<stdlib.h>

// int main(void)
// {
// 	char *s1 = "-2147483649";

// 	printf("ft      : %d\n", ft_atoi(s1));
// 	printf("original: %d\n", atoi(s1));

// 	return (0);
// }