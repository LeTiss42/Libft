/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oui.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:40:14 by mathis            #+#    #+#             */
/*   Updated: 2022/05/27 19:50:32 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t			ft_strlen(char *str);
char			*ft_strchr(char *s, int x);
char			*ft_strjoin(char *s1, char *s2);
char			*get_next_line(int fd);
char			*ft_get_line(char *frigo);
char			*ft_save(char *frigo);
char			*ft_read_and_save(int fd, char *frigo);

#endif