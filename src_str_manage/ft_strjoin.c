/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 22:34:38 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/21 10:39:34 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
**	Alloue (avec malloc(3)) et retourne une chaine de caractères “fraiche”
**	terminée par un ’\0’ résultant de la concaténation de s1 et s2. Si
**	l’allocation echoue, la fonction renvoie NULL.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		size;

	size = ft_strlen(s1) + ft_strlen(s2);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if ((str = ft_strnew(size)) == NULL)
		return (NULL);
	ft_strcat(str, s1);
	ft_strcat(str, s2);
	str[size] = '\0';
	return (str);
}
