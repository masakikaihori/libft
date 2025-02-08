/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:57:34 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/03 16:57:45 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

// #include<stdio.h>

// int main(void)
// {
// 	t_list lst1;
// 	t_list lst2;
// 	t_list lst3;

// 	lst1.next = &lst2;
// 	lst2.next = &lst3;
// 	lst3.next = NULL;

// 	printf("%d\n", ft_lstsize(&lst1));
// 	return (0);
// }