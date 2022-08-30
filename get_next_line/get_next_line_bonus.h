/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:24:07 by ftumay            #+#    #+#             */
/*   Updated: 2022/06/24 17:37:00 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

char	*get_next_line(int fd);
char	*ft_search_n_str(int fd, char *left_str);
char	*ft_new_left_str(char *left_str);
char	*ft_get_one_line(char *left_str);

size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *left_str, int n);
char	*ft_strjoin(char *left_str, const char *buff);

#endif