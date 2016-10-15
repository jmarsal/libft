/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer_toa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 01:04:44 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/16 01:14:40 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buffer	*buffer_utoa(t_buffer *b, unsigned long long value, int base)
{
	char	*n;
	
	n = ft_utoa_base(value, base);
	buffer_cat(b, n);
	free(n);
	return (b);
}
