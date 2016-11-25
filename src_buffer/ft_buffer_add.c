/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 15:28:06 by jmarsal           #+#    #+#             */
/*   Updated: 2016/11/24 18:03:57 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buffer	*ft_buffer_add(t_buffer *b, size_t pos, const char *s, size_t len)
{
	if (!b)
		b = ft_buffer_new(BUFFER_INIT_SIZE);
	if (pos > b->len)
		return (NULL);
	if (BUF_NEED_RESIZE(b, len))
		if (!(b = ft_buffer_resize(b, len)))
			return (NULL);
	ft_memmove(b->str + pos + len, b->str + pos, b->len - pos);
	ft_memcpy(b->str + pos, s, len);
	b->len += len;
	b->str[b->len] = 0;
	return (b);
}
