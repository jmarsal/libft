/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_buffer_replace.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 00:59:19 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/16 00:59:43 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buffer	*ft_buffer_replace(t_buffer *b, const char *s)
{
	return (ft_buffer_nreplace(b, s, ft_strlen(s)));
}

t_buffer	*ft_buffer_nreplace(t_buffer *b, const char *s, size_t len)
{
	b->len = 0;
	ft_buffer_ncat(b, s, len);
	b->str[b->len] = '\0';
	return (b);
}
