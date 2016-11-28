/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 15:47:42 by jmarsal           #+#    #+#             */
/*   Updated: 2016/11/28 13:38:47 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Alloue (avec malloc(3)) et retourne une chaine de caractère “fraiche”
**	terminée par un ’\0’. Chaque caractère de la chaine est initialisé à
**	’\0’. Si l’allocation echoue, la fonction renvoie NULL.
*/

char	*ft_strnew(size_t size)
{
	char *str;

	str = ft_memalloc(size + 1);
	return (str);
}
