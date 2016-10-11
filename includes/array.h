/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 22:42:51 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/11 00:06:32 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include "libft.h"

t_array	*ft_array_create(int size);
void	ft_array_add(t_array *array, void *ptr);
void	ft_array_destroy(t_array **array);

#endif
