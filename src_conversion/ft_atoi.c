/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/01 23:17:49 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/11 15:20:17 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	value;

	i = 0;
	value = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
			|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	neg = (str[i] == '-') ? 1 : 0;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while (ft_isdigit(str[i]))
		value = value * 10 + (str[i++] - '0');
	return (neg ? -value : value);
}
