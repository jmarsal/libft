/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/15 15:13:31 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/15 23:58:03 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size, size_t oldsize)
{
	void	*p;

	if (!ptr)
		return (ft_memalloc(size));
	if (size == 0)
	{
		ft_free_null(ptr);
		return (NULL);
	}
	if ((p = ft_memalloc(size)) == NULL)
		return (NULL);
	ft_memcpy(p, ptr, oldsize);
	ft_free_null(ptr);
	return (p);
}
