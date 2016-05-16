/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/25 16:43:58 by jmarsal           #+#    #+#             */
/*   Updated: 2016/05/16 21:38:32 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** n a positive or negative value.
**Return the absolute value of n.
*/

int		ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
