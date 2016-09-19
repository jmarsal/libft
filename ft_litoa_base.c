/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_litoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 22:11:35 by jmarsal           #+#    #+#             */
/*   Updated: 2016/09/19 02:21:44 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*last_caract(char *number, int i, int base, long value)
{
	char	*str;

	str = "1";
	if (value == LONG_MIN && base != 8)
		number[0] += 1;
	if (base == 10)
		number[i] = '-';
	if (base != 10)
		number = ft_strcat(number, str);
	return (number);
}

static char	*check_error(long long val, int base, long value)
{
	char		*str;
	long int	i;

	i = 0;
	if (base < 2 || base > 16)
		return (NULL);
	if ((str = ft_memalloc(sizeof(char) * 65)) == NULL)
		return (NULL);
	while (i < 65)
		str[i++] = 0;
	if (val <= INT_MAX && val >= INT_MIN && base != 8)
		str = ft_itoa_base(value, base);
	return (str);
}

char		*ft_litoa_base(long value, int base)
{
	int			i;
	int			neg;
	long long	val;
	char		*number;
	char		*charset;

	charset = "0123456789ABCDEF";
	i = 0;
	neg = (value < 0) ? 1 : 0;
	val = (neg) ? -(long long)value : value;
	value == LONG_MIN && base != 8 ? val -= 1 : val;
	if ((number = check_error(val, base, value)) == NULL)
	return (NULL);
	if (neg && base == 8 && value >= INT_MIN)
		val = (val ^ 0x7fffffffffffffff) + 1;
	if (value == 0)
		number[i] = '0';
	while (val)
	{
		number[i++] = charset[val % base];
		val /= base;
	}
	if (neg)
		last_caract(number, i, base, value);
	return (ft_strrev(number));
}
