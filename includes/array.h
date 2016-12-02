/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 22:42:51 by jmarsal           #+#    #+#             */
/*   Updated: 2016/12/02 14:31:38 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include "libft.h"

# define INIT_TAB_SIZE 1

t_array	*ft_array_create(int size);
void	ft_array_add(t_array *array, void *ptr);
void	ft_array_destroy(t_array **array);

#endif
