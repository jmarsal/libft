/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_manage.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 15:14:41 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/11 12:01:45 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_MANAGE_H
# define STR_MANAGE_H

# include "libft.h"

/*
**	Sring Management
*/

char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
char	*ft_strtoupper(char *str);
char	*ft_strtolower(char *str);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t nb);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strtrim(char const *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_strsplit(char const *s, char c);
char	*ft_strrev(char *str);
char	*ft_strreplace(const char *str, const char *find, const char *replace);

#endif
