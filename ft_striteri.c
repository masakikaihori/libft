/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:20:39 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/04 18:27:45 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
// void a_to_alpha(unsigned int i, char *s);

#include"libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;

	index = 0;
	if (s == NULL)
		return ;
	while (*s)
	{
		f(index, s);
		index++;
		s++;
	}
	return ;
}

// void a_to_alpha(unsigned int i, char *s)
// {
// 	s[i] += i;

// 	return ;
// }

// #include<stdio.h>

// int main(void)
// {
// 	char s1[] = "aaaaaaaaaa";
// 	ft_striteri(s1, a_to_alpha);

// 	printf("%s\n", s1);

// 	return (0);
// }