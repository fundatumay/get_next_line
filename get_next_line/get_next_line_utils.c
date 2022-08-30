/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 00:27:43 by ftumay            #+#    #+#             */
/*   Updated: 2022/06/24 16:47:49 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
// get_next_line fonksiyonu için kullanılacak ekstra fonksiyonlar burada.

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *left_str, int n)
{
	int	i;

	i = 0;
	if (!left_str)
		return (NULL);
	while (left_str[i] != '\0' && left_str[i] != (char) n)
		i++;
	if (left_str[i] == (char) n)
		return ((char *)left_str);
	return (0);
}

char	*ft_strjoin(char *left_str, const char *buff)
{
	char	*new_str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!left_str)
	{
		left_str = (char *) malloc(sizeof(char) * 1);
		left_str[0] = '\0';
	}
	if (!left_str || !buff)
		return (NULL);
	new_str = (char *) malloc(ft_strlen(left_str) + ft_strlen(buff) + 1);
	if (!new_str)
		return (0);
	while (left_str[i])
		new_str[j++] = left_str[i++];
	i = 0;
	while (buff[i])
		new_str[j++] = buff[i++];
	new_str[j] = '\0';
	free(left_str);
	return (new_str);
}
