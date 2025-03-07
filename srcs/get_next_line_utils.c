/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <nana7hachi89gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 18:23:03 by mkaihori          #+#    #+#             */
/*   Updated: 2024/12/30 23:26:04 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/get_next_line.h"

void	*ft_free(char *str)
{
	if (str)
		free(str);
	return (NULL);
}

size_t	gnl_strlen(char *str)
{
	size_t	size;

	size = 0;
	if (!str)
		return (0);
	while (str[size])
		size++;
	return (size);
}

size_t	have_newline(char *str)
{
	size_t	size;

	size = 0;
	if (!str)
		return (0);
	while (str[size])
	{
		if (str[size] == '\n')
			return (size + 1);
		size++;
	}
	return (0);
}

char	*ft_strjoins(char *old, char *tmp)
{
	char	*new;
	size_t	i;
	size_t	j;

	new = (char *)malloc(sizeof(char) * (gnl_strlen(old) + gnl_strlen(tmp) + 1));
	if (!new)
	{
		ft_free(old);
		ft_free(tmp);
		return (NULL);
	}
	i = 0;
	while (old && old[i])
	{
		new[i] = old[i];
		i++;
	}
	j = 0;
	while (tmp[j])
	{
		new[i + j] = tmp[j];
		j++;
	}
	new[i + j] = '\0';
	return (new);
}
