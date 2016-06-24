/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut_before.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/24 14:33:42 by jmarsal           #+#    #+#             */
/*   Updated: 2016/06/24 15:01:12 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strcut_before(const char *s, int c)
{
	size_t	len;
	size_t	i;
	char	*ret;
	char	*tmp;

	len = 0;
	i = 0;
	tmp = ft_strrchr(s, '/');
	while (tmp[++len] != (char)c)
		;
	if ((ret = ft_memalloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	while (tmp[i] && i < len - 1)
	{
		ret[i] = tmp[i + 1];
		i++;
	}
	ret[++i] = '\0';
	return (ret);
}
