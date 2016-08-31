/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 21:47:57 by jmarsal           #+#    #+#             */
/*   Updated: 2016/08/29 21:49:59 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlnbr(long int nb)
{
	unsigned long int n;

	n = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	if (n > 9)
	{
		ft_putlnbr(n / 10);
		ft_putlnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}
