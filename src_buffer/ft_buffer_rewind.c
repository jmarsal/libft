/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer_rewind.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 01:01:42 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/16 01:09:39 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recule le buffer de n caractere
** Retourne -1 si n dépasse la len du buffer
** 0 en cas de succès
*/

int		buffer_rewind(t_buffer *b, size_t n)
{
	size_t	nlen;

	if (n > b->len)
		return (-1);
	nlen = b->len - n;
	b->str[nlen] = '\0';
	b->len = nlen;
	return ((int)nlen);
}

/*
** Recule le buffer jusqu'au char c
** Retourne le nombre de char reculé
*/

size_t	buffer_rewindchr(t_buffer *b, int c)
{
	int		pos;
	size_t	ret;

	pos = ft_strchrpos(b->str, c);
	if (pos == -1)
		return (0);
	b->str[pos] = '\0';
	ret = b->len - pos;
	b->len = pos;
	return (ret);
}

