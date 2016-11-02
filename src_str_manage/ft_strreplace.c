/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/03 22:53:57 by jmarsal           #+#    #+#             */
/*   Updated: 2016/11/02 12:22:49 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** cherche si find se trouve dans 'str', si oui, remplace toutes les occurances
** par 'replace', autrement retourne 'str'.
*/

static char	*ret_strcpy(char *dest, const char *src, size_t i, size_t len)
{
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

static char	*ret_newstr(char **str_before, char **str_after, size_t *i,
						const char *str, int test)
{
	*str_after = ft_strdup(str + *i);
	*str_before = ft_strjoin(*str_before, *str_after);
	ft_free_null(*str_after);
	if (test)
	{
		*str_after = ft_strchr(*str_before, '}');
		*str_before = ft_strchr_bef(*str_before, '}');
		*str_before = ft_strjoin(*str_before, *str_after + 1);
	}
	return (*str_before);
}

static char	*get_bef(char *str_before, size_t i, size_t *j)
{
	char	*ret_str;

	ret_str = NULL;
	*j = 0;
	if (str_before)
	{
		ret_str = ft_memalloc(sizeof(char) * i + 1);
		*j = ft_strlen(str_before + 1);
		return (ret_strcpy(ret_str, str_before, *j, i));
	}
	return (str_before = ft_memalloc(sizeof(char) * i + 1));
}

static void	init_var(const char *find, char **str_before, size_t *i, int *test)
{
	*str_before = NULL;
	*i = 0;
	*test = 0;
	if (find[0] == '{' && find[ft_strlen(find) - 1] == '}')
	{
		*test = 1;
		find = ft_strdup(find + 1);
		find = ft_strchr_bef(find, '}');
	}
}

char		*ft_strreplace(const char *str, const char *find,
						const char *replace)
{
	char	*str_before;
	char	*str_after;
	size_t	i;
	size_t	j;
	int		test;

	if (!(str || find || replace))
		return (NULL);
	init_var(find, &str_before, &i, &test);
	while (str[i++])
	{
		if ((ft_strncmp(str + i, find, ft_strlen(find))) == 0)
		{
			str_before = get_bef(str_before, i, &j);
			str_before = test ?
					ft_strjoin(ret_strcpy(str_before, str, j, i - 1), replace) :
					ft_strjoin(ret_strcpy(str_before, str, j, i), replace);
			i += ft_strlen(find);
			str_before = ret_newstr(&str_before, &str_after, &i, str, test);
		}
	}
	return (str_before ? str_before : (char *)str);
}
