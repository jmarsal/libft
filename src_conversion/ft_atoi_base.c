/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/03 15:03:42 by jmarsal           #+#    #+#             */
/*   Updated: 2016/06/27 11:05:36 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_uc(char c)
{
	int uc;

	uc = 0;
	if (c == 'F' || c == 'f')
		uc = 15;
	else if (c == 'E' || c == 'e')
		uc = 14;
	else if (c == 'D' || c == 'd')
		uc = 13;
	else if (c == 'C' || c == 'c')
		uc = 12;
	else if (c == 'B' || c == 'b')
		uc = 11;
	else if (c == 'A' || c == 'a')
		uc = 10;
	else if (c >= '0' && c <= '9')
		uc = c - '0';
	return (uc);
}

int			ft_atoi_base(char *str, int str_base)
{
	int i;
	int power;
	int uc;
	int result;

	i = ft_strlen(str) - 1;
	power = 1;
	result = 0;
	while (i >= 0)
	{
		uc = get_uc(str[i]);
		result = result + uc * power;
		power = power * str_base;
		i--;
	}
	return (result);
}
