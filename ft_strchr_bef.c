/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_bef.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 10:49:10 by jmarsal           #+#    #+#             */
/*   Updated: 2016/06/27 10:54:55 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Malloc et retourne tout ce qui se trouve avant 'c',
** return NULL si le malloc n'est pas possible.
*/

char				*ft_strchr_bef(const char *s, int c)
{
	size_t	len;
	size_t	i;
	char	*ret;

	len = 0;
	i = 0;
	while (s[++len] != (char)c)
		;
	if ((ret = ft_memalloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	while (s[i] && i < len)
	{
		ret[i] = s[i];
		i++;
	}
	ret[++i] = '\0';
	return (ret);
}
