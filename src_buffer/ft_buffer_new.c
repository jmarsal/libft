/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 00:09:57 by jmarsal           #+#    #+#             */
/*   Updated: 2016/11/02 11:21:20 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buffer	*ft_buffer_init(t_buffer *b, size_t size)
{
	size_t	s;

	s = (size == 0) ? BUFFER_INIT_SIZE : size;
	b->sizemax = s;
	b->len = 0;
	b->str = ft_memalloc(sizeof(char) * s);
	if (b->str == NULL)
		return (NULL);
	return (b);
}

t_buffer	*ft_buffer_new(size_t size)
{
	t_buffer	*new;

	new = ft_memalloc(sizeof(t_buffer));
	if (new == NULL)
		return (NULL);
	return (ft_buffer_init(new, size));
}

t_buffer	*ft_buffer_dup(const char *str)
{
	return (ft_buffer_ndup(str, ft_strlen(str)));
}

t_buffer	*ft_buffer_ndup(const char *str, size_t len)
{
	t_buffer	*new;

	new = ft_buffer_new(len + 1);
	if (new == NULL)
		return (NULL);
	ft_memcpy(new->str, str, len);
	new->len = len;
	return (new);
}
