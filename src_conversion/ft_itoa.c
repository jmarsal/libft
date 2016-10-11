/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 09:42:51 by jmarsal           #+#    #+#             */
/*   Updated: 2016/08/29 22:08:48 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Alloue (avec malloc(3)) et retourne une chaine de caractères “fraiche”
**	terminée par un ’\0’ représentant l’entier n passé en paramètre. Les
**	nombres négatifs doivent être gérés. Si l’al- location échoue, la
**	fonction renvoie NULL.
*/

char	*ft_itoa(int n)
{
	return (ft_itoa_base(n, 10));
}
