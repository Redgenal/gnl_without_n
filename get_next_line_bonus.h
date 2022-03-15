/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utawana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:32:24 by utawana           #+#    #+#             */
/*   Updated: 2022/03/15 18:32:33 by utawana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include "../libft/libft.h"

char	*get_next_line(int fd);
char	*ft_strchr_gnl(const char *string, int symbol);
char	*ft_strdup_gnl(const char *s1);
char	*ft_strjoin_gnl(char *s1, char *s2);
char	*ft_substr_gnl(char const *s, unsigned int start, size_t len);

size_t	ft_strlen_gnl(const char *str);

#endif
