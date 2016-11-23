/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 14:38:54 by jmarsal           #+#    #+#             */
/*   Updated: 2016/11/23 16:25:06 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
**	Alloue (avec malloc(3)) et retourne une chaine de caractères “fraiche”
**	terminée par un ’\0’ résultant de la concaténation de s1 et s2. Si
**	l’allocation echoue, la fonction renvoie NULL. Enfin, elle free s1.
*/

char	*ft_strjoinf(char **s1, char const *s2)
{
	char	*str;
	int		size;

	if (s2 == NULL)
		return (NULL);
	if (*s1 == NULL)
		*s1 = ft_strnew(0);
	size = ft_strlen(*s1) + ft_strlen(s2);
	if ((str = ft_strnew(size)) == NULL)
		return (NULL);
	ft_strcat(str, *s1);
	ft_strcat(str, s2);
	str[size] = '\0';
	ft_free(*s1);
	return (str);
}
