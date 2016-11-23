/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 11:09:16 by jmarsal           #+#    #+#             */
/*   Updated: 2016/11/23 16:28:23 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_utoa_base(unsigned long int n, int base)
{
	int		i;
	char	*number;
	char	*charset;

	charset = "0123456789abcdef";
	if (base < 2 || base > 16)
		return (NULL);
	if (!(number = ft_strnew(32)))
		return (NULL);
	i = 0;
	if (n == 0)
		number[i++] = '0';
	while (n != 0)
	{
		number[i] = charset[n % base];
		n /= base;
		i++;
	}
	number[i] = '\0';
	return (ft_strrev(number));
}
