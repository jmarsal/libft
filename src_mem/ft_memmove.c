/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 18:12:38 by jmarsal           #+#    #+#             */
/*   Updated: 2016/06/10 14:43:01 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_memmove_align(void **dest, const void **src, size_t *n)
{
	size_t			size;
	unsigned char	*destination;
	unsigned char	*source;

	destination = (unsigned char *)*dest + *n;
	source = (unsigned char *)*src + *n;
	size = (unsigned long int)destination % sizeof(void *);
	if (*n < size)
		size = *n;
	*n -= size;
	while (size)
	{
		--destination;
		--source;
		*destination = *source;
		--size;
	}
	*dest = (void *)destination;
	*src = (void *)source;
}

static void	ft_memmove_bulk(void **dest, const void **src, size_t *n)
{
	unsigned char	swap[4096];
	unsigned char	*destination;
	unsigned char	*source;

	destination = (unsigned char *)*dest;
	source = (unsigned char *)*src;
	while (*n >= 4096)
	{
		destination -= 4096;
		source -= 4096;
		ft_memcpy(swap, source, 4096);
		ft_memcpy(destination, swap, 4096);
		*n -= 4096;
	}
	*dest = (void *)destination;
	*src = (void *)source;
}

static void	ft_memmove_terminate(void **dest, const void **src, size_t *n)
{
	unsigned char	swap[*n];
	unsigned char	*destination;
	unsigned char	*source;

	destination = (unsigned char *)*dest - *n;
	source = (unsigned char *)*src - *n;
	ft_memcpy(swap, source, *n);
	ft_memcpy(destination, swap, *n);
	*n -= 0;
	*dest = (void *)destination;
	*src = (void *)source;
}

void		*ft_memmove(void *dst, const void *src, size_t n)
{
	void	*orig;

	if (n == 0 || dst == src)
		return (dst);
	if (src > dst)
		return (ft_memcpy(dst, src, n));
	orig = dst;
	ft_memmove_align(&dst, &src, &n);
	if (n >= 4096)
		ft_memmove_bulk(&dst, &src, &n);
	if (n != 0)
		ft_memmove_terminate(&dst, &src, &n);
	return (orig);
}
