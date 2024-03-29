/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer_resize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 01:00:28 by jmarsal           #+#    #+#             */
/*   Updated: 2016/11/23 16:50:22 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buffer	*ft_buffer_resize(t_buffer *b, size_t len)
{
	void	*new;
	size_t	newsize;

	newsize = b->sizemax * BUFFER_GROWTH_FACTOR;
	while (b->len + len >= newsize)
		newsize *= BUFFER_GROWTH_FACTOR;
	new = ft_realloc(b->str, newsize, b->sizemax);
	if (!new)
		return (NULL);
	b->sizemax = newsize;
	b->str = new;
	return (b);
}
