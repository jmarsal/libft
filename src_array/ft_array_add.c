/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 23:51:52 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/11 00:05:44 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_array_resize(t_array *array)
{
	void	**cells;
	int		i;

	if (!(cells = (void**)malloc(sizeof(void*) * array->size * 2)))
		exit(-1);
	i = 0;
	while (i < array->size)
	{
		cells[i] = array->cells[i];
		i++;
	}
	array->size *= 2;
	while (i < array->size)
		cells[i++] = NULL;
	free(array->cells);
	array->cells = cells;
}

void		ft_array_add(t_array *array, void *ptr)
{
	if (array->index + 1 == array->size)
		ft_array_resize(array);
	array->cells[array->index++] = ptr;
}