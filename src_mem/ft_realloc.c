/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/15 15:13:31 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/12 16:00:26 by jmarsal          ###   ########.fr       */
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
		free(ptr);
		ptr = NULL;
		return (NULL);
	}
	if ((p = ft_memalloc(size)) == NULL)
		return (NULL);
	ft_memcpy(p, ptr, oldsize);
	free(ptr);
	ptr = NULL;
	return (p);
}
