/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer_remove.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 00:58:15 by jmarsal           #+#    #+#             */
/*   Updated: 2016/11/02 11:20:19 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Return the numbers of bytes effectively remove
*/

size_t	ft_buffer_remove(t_buffer *b, size_t pos, size_t size)
{
	size_t	removed;

	if (pos >= b->len)
		return (0);
	if (pos + size >= b->len)
	{
		removed = b->len - pos;
		b->len = pos;
	}
	else
	{
		removed = size;
		ft_memmove(b->str + pos, b->str + pos + size, b->len - (pos + size));
		b->len -= size;
	}
	b->str[b->len] = '\0';
	return (removed);
}
