/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_control.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 15:14:19 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/13 11:58:24 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_CONTROL_H
# define STR_CONTROL_H

# include "libft.h"

/*
**	String control
*/

size_t	ft_strlen(const char *str);
size_t	ft_strnlen(const char *str, size_t len);
char	*ft_strchr_bef(const char *s, int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_strchrpos(const char *str, char c);
size_t	ft_wcslen(const wchar_t *s);

#endif
