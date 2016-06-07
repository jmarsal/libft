/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 23:25:31 by jmarsal           #+#    #+#             */
/*   Updated: 2016/06/08 00:13:57 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	size;
	char	*source;

	if (n == 0)
		return (NULL);
	source = (char *)src;
	size = 0;
	while (source[size] != (char)c)
	{
		++size;
		if (size == n)
		{
			ft_memcpy(dst, src, n);
			return (NULL);
		}
	}
	ft_memcpy(dst, src, size);
	return ((void *)((char *)dst + size));
}
