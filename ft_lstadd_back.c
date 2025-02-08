/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:23:06 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/11 16:57:17 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return ;
}

// #include<stdio.h>
// #include<stdlib.h>

// int main(void)
// {
// 	t_list *lst1 = (t_list *)malloc(sizeof(t_list));
// 	t_list *lst2 = (t_list *)malloc(sizeof(t_list));
// 	t_list *lst3 = (t_list *)malloc(sizeof(t_list));
// 	t_list *lst4 = (t_list *)malloc(sizeof(t_list));
// 	t_list *lst5 = (t_list *)malloc(sizeof(t_list));
// 	t_list *lst;

// 	lst = NULL;

// 	int v1 = 100;
// 	int v2 = 200;
// 	int v3 = 300;
// 	int v4 = 400;
// 	int v5 = 500;

// 	lst1->content = &v1;
// 	lst2->content = &v2;
// 	lst3->content = &v3;
// 	lst4->content = &v4;
// 	lst5->content = &v5;

// 	ft_lstadd_back(&lst, lst1);
// 	printf("%d\n", *(int *)lst->content);
// 	ft_lstadd_back(&lst, lst2);
// 	printf("%d\n", *(int *)lst->content);

// 	return (0);
// }