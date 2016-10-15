/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer_merge.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 00:57:13 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/16 01:13:51 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buffer	*buffer_merge(t_buffer *b1, t_buffer *b2)
{
	t_buffer	*new;
	size_t		size;
	
	size = b1->sizemax + b2->sizemax;
	new = buffer_new(size);
	if (new == NULL)
		return (NULL);
	new->len = b1->len + b2->len;
	ft_memcpy(new->str, b1->str, b1->len);
	ft_memcpy(new->str + b1->len, b2->str, b2->len);
	return (new);
}
