/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <nana7hachi89gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 18:23:01 by mkaihori          #+#    #+#             */
/*   Updated: 2024/12/30 23:26:33 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./get_next_line.h"

char	*leftover(char *str, char *new_line)
{
	char	*new;
	size_t	size;
	size_t	i;
	size_t	newline_size;

	newline_size = gnl_strlen(new_line);
	if (newline_size == 0)
		return (ft_free(str));
	size = gnl_strlen(str) - newline_size;
	if (size == 0)
	{
		free(str);
		return (NULL);
	}
	new = (char *)malloc(sizeof(char) * (size + 1));
	if (!new)
		return (ft_free(str));
	i = 0;
	while (i <= size)
	{
		new[i] = str[newline_size + i];
		i++;
	}
	ft_free(str);
	return (new);
}

char	*get_new_line(char *str)
{
	char	*new_line;
	size_t	size;

	size = have_newline(str);
	if (!size)
		size = gnl_strlen(str);
	if (!size)
		return (NULL);
	new_line = (char *)malloc(sizeof(char) * (size + 1));
	if (!new_line)
		return (NULL);
	new_line[size] = '\0';
	while (--size >= 1)
		new_line[size] = str[size];
	new_line[size] = str[size];
	return (new_line);
}

char	*read_file(int fd, char *old, bool *eof)
{
	char	*new;
	char	*tmp;
	ssize_t	byte;

	tmp = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!tmp)
		return (ft_free(old));
	byte = read(fd, tmp, BUFFER_SIZE);
	if (byte == -1)
	{
		ft_free(old);
		ft_free(tmp);
		return (NULL);
	}
	tmp[byte] = '\0';
	if (byte == 0)
		*eof = true;
	new = ft_strjoins(old, tmp);
	if (new)
	{
		ft_free(old);
		ft_free(tmp);
		tmp = NULL;
	}
	return (new);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*new_line;
	bool		eof;

	eof = false;
	if (BUFFER_SIZE < 1 || BUFFER_SIZE > __SIZE_MAX__ - 1)
		return (NULL);
	while ((!str || !have_newline(str)) && !eof)
	{
		str = read_file(fd, str, &eof);
		if (!str)
			return (NULL);
	}
	new_line = get_new_line(str);
	str = leftover(str, new_line);
	return (new_line);
}

void	*debugy_malloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	printf("malloc : %p\n", ptr);
	return (ptr);
}

// int	main(void)
// {
// 	char	*str;
// 	int		fd;

// 	fd = open("./get_next_line.c", O_RDONLY);
// 	if (fd == -1)
// 	{
// 		printf("fd error\n");
// 		return (-1);
// 	}
// 	str = get_next_line(fd);
// 	while (str)
// 	{
// 		printf("%s", str);
// 		free(str);
// 		str = get_next_line(fd);
// 	}
// 	printf("\n");
// 	return (0);
// }
