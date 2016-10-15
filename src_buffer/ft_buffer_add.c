/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 00:40:53 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/16 00:55:32 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buffer	*ft_buffer_insert(t_buffer *b, size_t pos, const char *s, size_t len)
{
	if (pos > b->len)
		return (NULL);
	if (BUF_NEED_RESIZE(b, len))
		if (buffer_resize(b, len) == NULL)
			return (NULL);
	ft_memmove(b->str + pos + len, b->str + pos, b->len - pos);
	ft_memcpy(b->str + pos, s, len);
	b->len += len;
	b->str[b->len] = 0;
	return (b);
}
