/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/27 17:21:41 by jmarsal           #+#    #+#             */
/*   Updated: 2016/11/23 16:17:20 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(long n, int base)
{
	int		i;
	int		negative;
	char	*number;
	char	*charset;

	charset = "0123456789abcdef";
	if (base < 2 || base > 16)
		return (NULL);
	negative = (n < 0) ? 1 : 0;
	if (!(number = ft_strnew(32 + 1)))
		return (NULL);
	i = 0;
	if (n == 0)
		number[i++] = '0';
	while (n != 0)
	{
		number[i] = charset[ft_abs(n % base)];
		n /= base;
		i++;
	}
	if (negative)
		number[i++] = '-';
	number[i] = '\0';
	return (ft_strrev(number));
}
