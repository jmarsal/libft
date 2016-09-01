/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulitoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 22:11:35 by jmarsal           #+#    #+#             */
/*   Updated: 2016/08/31 17:41:44 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*check_error(unsigned long long val, int base, unsigned long value)
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
	if (val <= LONG_MAX && base != 8)
		str = ft_litoa_base(value, base);
	return (str);
}

char		*ft_ulitoa_base(unsigned long value, int base)
{
	unsigned long		i;
	unsigned long long	val;
	char				*number;
	char				*charset;

	charset = "0123456789ABCDEF";
	i = 0;
	val = value;
	if ((number = check_error(val, base, value)) == NULL)
	return (NULL);
	if (value == 0)
		number[i] = '0';
	while (val)
	{
		number[i++] = charset[val % base];
		val /= base;
	}
	return (ft_strrev(number));
}
