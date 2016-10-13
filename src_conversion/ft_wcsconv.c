/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcsconv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 12:48:07 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/13 13:09:36 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Convertie un wchar* en char *
*/

char	*ft_wcsconv(wchar_t *ws)
{
	char	*str_tmp;
	size_t	i;
	size_t	len;

	if (!ws)
		return (NULL);
	i = 0;
	len = ft_wcslen(ws) * sizeof(wchar_t) + 1;
	if (!(str_tmp = ft_memalloc(sizeof(char) * len)))
		return (NULL);
	ft_bzero(str_tmp, len);
	while (ws[i])
		str_tmp = ft_strjoin(str_tmp, ft_wcconv(ws[i++]));
	return (str_tmp);
}
