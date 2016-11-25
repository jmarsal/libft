/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer_destroy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 00:55:10 by jmarsal           #+#    #+#             */
/*   Updated: 2016/11/25 10:58:45 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_buffer_destroy(t_buffer **b)
{
	if (*b)
	{
		free((*b)->str);
		free((*b));
		*b = NULL;		
	}
}
