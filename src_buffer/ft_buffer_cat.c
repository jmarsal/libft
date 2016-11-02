/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer_cat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 11:18:33 by jmarsal           #+#    #+#             */
/*   Updated: 2016/11/02 11:18:35 by jmarsal          ###   ########.fr       */
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
