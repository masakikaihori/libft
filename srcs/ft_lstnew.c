/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:57:59 by mkaihori          #+#    #+#             */
/*   Updated: 2023/10/06 14:23:59 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

// #include<stdio.h>

// int main(void)
// {
// 	int data = 42;

// 	t_list *newNode = ft_lstnew(&data);

// 	if (newNode != NULL)
// 	{
// 		printf("新しいリスト要素の内容: %d\n", *(int *)(newNode->content));
// 	}
// 	else
// 	{
// 		printf("リスト要素の作成に失敗しました。\n");
// 	}

// 	free(newNode);

// 	return (0);
// }