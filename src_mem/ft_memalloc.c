/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 15:23:14 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/25 23:17:21 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Alloue (avec malloc(3)) et retourne une zone de mémoire “fraiche”.
**	La mémoire allouée est initialisée à 0. Si l’allocation échoue,
**	la fonction renvoie NULL.
*/

void	*ft_memalloc(size_t size)
{
	void	*p;

	if (!size || (p = malloc(size + 1)) == NULL)
		return (NULL);
	ft_bzero(p, size + 1);
	return (p);
}
