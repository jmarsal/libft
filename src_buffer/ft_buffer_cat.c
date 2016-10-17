/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_buffer_cat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 00:53:42 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/16 01:13:38 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buffer	*ft_buffer_cat(t_buffer *b, const char *s)
{
	return (ft_buffer_ncat(b, s, ft_strlen(s)));
}

t_buffer	*ft_buffer_ncat(t_buffer *b, const char *s, size_t len)
{
	if (BUF_NEED_RESIZE(b, len))
		if (ft_buffer_resize(b, len) == NULL)
			return (NULL);
	ft_memcpy(b->str + b->len, s, len);
	b->len += len;
	return (b);
}
