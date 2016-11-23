/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/18 23:36:42 by jmarsal           #+#    #+#             */
/*   Updated: 2016/11/23 16:10:21 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*init_number(const char *str, size_t *i, size_t sign)
{
	size_t	len;
	char	*number;

	len = 0;
	while (str[*i + len] && ft_isdigit(str[*i + len]))
		++len;
	len = (sign) ? 1 + len : len;
	if (!(number = ft_strnew(len + 1)))
		return (NULL);
	return (number);
}

char		*ft_get_number(const char *str, size_t *i)
{
	size_t	sign;
	size_t	index;
	char	*number;

	sign = (str[*i] == '-') ? 1 : 0;
	index = 0;
	if (!(number = init_number(str, i, sign)))
		return (NULL);
	if (sign)
		number[index++] = '-';
	while (str[*i + index] && ft_isdigit(str[*i + index]))
	{
		number[index] = str[*i + index];
		index++;
	}
	number[index] = '\0';
	*i += index;
	return (number);
}
