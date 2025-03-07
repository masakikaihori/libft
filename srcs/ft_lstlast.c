/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:15:24 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/06 08:55:30 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (lst);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
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

// 	int i = 1;
// 	int j = 2;
// 	int k = 4;

// 	lst1.content = &i;
// 	lst2.content = &j;
// 	lst3.content = &k;

// 	printf("%d\n", *(int *)(ft_lstlast(&lst1)->content));
// 	return (0);
// }