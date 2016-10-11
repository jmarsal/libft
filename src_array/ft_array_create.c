/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 23:06:31 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/11 00:39:36 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_array	*ft_array_create(int size)
{
	t_array	*array;

	if (!(array = (t_array*)malloc(sizeof(t_array))))
		exit(-1);
	array->index = 0;
	array->size = size;
	if (!(array->cells = (void**)malloc(sizeof(void*) * size)))
		exit(-1);
	while ((--size) >= 0)
		array->cells[size] = NULL;
	return (array);
}