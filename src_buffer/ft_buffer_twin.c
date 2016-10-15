/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer_twin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 01:05:53 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/16 01:14:56 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buffer	*buffer_twin(t_buffer *b)
{
	t_buffer	*copy;
	
	copy = buffer_new(b->sizemax);
	if (copy == NULL)
		return (NULL);
	copy->len = b->len;
	ft_memcpy(copy->str, b->str, b->len);
	return (copy);
}
