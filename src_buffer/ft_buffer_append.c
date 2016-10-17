/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer_append.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 00:51:06 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/17 17:50:32 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Append to dst the content of src
** Return the new size of dst or -1 on error
*/

t_buffer	*ft_buffer_append(t_buffer *dst, t_buffer *src)
{
	return (ft_buffer_ncat(dst, src->str, src->len));
}
