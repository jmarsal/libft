/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 15:31:33 by jmarsal           #+#    #+#             */
/*   Updated: 2016/11/23 14:23:11 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
**	Prend en paramètre l’adresse d’un pointeur dont la zone pointée
**	doit être libérée avec free(3), puis le pointeur est mis à NULL.
*/

void	ft_memdel(void **ap)
{
	ft_free(*ap);
}
