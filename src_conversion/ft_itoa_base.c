/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/27 17:21:41 by jmarsal           #+#    #+#             */
/*   Updated: 2016/09/19 01:28:13 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_check_error(int base)
{
	char	*str;
	int		i;

	i = 0;
	if (base < 2 || base > 16)
		return (NULL);
	if ((str = malloc(65)) == NULL)
		return (NULL);
	while (i < 65)
		str[i++] = 0;
	return (str);
}

char		*ft_itoa_base(int value, int base)
{
	int		i;
	int		neg;
	long	val;
	char	*number;
	char	*charset;

	charset = "0123456789ABCDEF";
	i = 0;
	neg = (value < 0) ? 1 : 0;
	val = (neg) ? -(long)value : value;
	if ((number = ft_check_error(base)) == NULL)
		return (NULL);
	if (neg && (base != 10))
		val = (val ^ 0xffffffff) + 1;
	if (value == 0)
		number[i] = '0';
	while (val)
	{
		number[i++] = charset[val % base];
		val /= base;
	}
	if (neg && base == 10)
		number[i++] = '-';
	return (ft_strrev(number));
}
