/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 12:24:53 by jmarsal           #+#    #+#             */
/*   Updated: 2016/06/07 23:40:17 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*ft_memset_align(unsigned char *ptr, unsigned char value,
									size_t *n)
{
	size_t	size;

	size = (unsigned long int)ptr % sizeof(void *);
	if (*n < size)
		size = *n;
	*n -= size;
	while (size)
	{
		*ptr = value;
		++ptr;
		--size;
	}
	return ((void *)ptr);
}

static void		*ft_memset_terminate(unsigned char *ptr, unsigned char value,
										size_t *n)
{
	while (*n)
	{
		*ptr = value;
		++ptr;
		--(*n);
	}
	return ((void *)ptr);
}

static void		*ft_memset_bulk(unsigned long int *ptr, unsigned char value,
								size_t *n)
{
	unsigned long int	val;

	val = value << 24 | value << 16 | value << 8 | value;
	val |= val << 32;
	while (*n >= 64)
	{
		*ptr = val;
		*(ptr + 1) = val;
		*(ptr + 2) = val;
		*(ptr + 3) = val;
		*(ptr + 4) = val;
		*(ptr + 5) = val;
		*(ptr + 6) = val;
		*(ptr + 7) = val;
		ptr += 8;
		*n -= 64;
	}
	while (*n >= 8)
	{
		*ptr = val;
		++ptr;
		*n -= 8;
	}
	return ((void *)ptr);
}

void			*ft_memset(void *s, int c, size_t n)
{
	if (n <= 0)
		return (s);
	s = ft_memset_align((unsigned char *)s, (unsigned char)c, &n);
	if (n >= sizeof(void *) * 2)
		s = ft_memset_bulk((unsigned long int *)s, (unsigned char)c, &n);
    if (n != 0)
        s = ft_memset_terminate((unsigned char *)s, (unsigned char)c, &n);
	return (s);
}
