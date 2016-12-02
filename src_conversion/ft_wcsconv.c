/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcsconv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 12:48:07 by jmarsal           #+#    #+#             */
/*   Updated: 2016/11/28 16:40:20 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Convertie un wchar* en char *
*/

char	*ft_wcsconv(wchar_t *ws)
{
	char	*str_tmp;
	char	*ret_str;
	size_t	i;
	size_t	len;

	if (!ws)
		return (NULL);
	i = 0;
	str_tmp = NULL;
	len = ft_wcslen(ws) * sizeof(wchar_t) + 1;
	if (!(ret_str = ft_strnew(len)))
		return (NULL);
	while (ws[i])
	{
		str_tmp = ft_wcconv(ws[i++]);
		ret_str = ft_strcat(ret_str, str_tmp);
		ft_free(str_tmp);
	}
	return (ret_str);
}
