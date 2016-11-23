/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer_set.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 01:03:28 by jmarsal           #+#    #+#             */
/*   Updated: 2016/11/23 16:51:09 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buffer	*ft_buffer_set(t_buffer *b, int c, size_t len)
{
	if (BUF_NEED_RESIZE(b, len))
		if (!ft_buffer_resize(b, len))
			return (NULL);
	ft_memset(b->str + b->len, c, len);
	b->len += len;
	b->str[b->len] = 0;
	return (b);
}
