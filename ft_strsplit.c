/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 23:31:37 by jmarsal           #+#    #+#             */
/*   Updated: 2016/06/11 00:56:29 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Alloue (avec malloc(3)) et retourne un tableau de chaines de caractères
**	“fraiches” (toutes terminées par un ’\0’, le tableau également donc)
**	résultant de la découpe de s selon le caractère c. Si l’allocation
**	echoue, la fonction retourne NULL.
**	Exemple : ft_strsplit("*salut*les***etudiants*", ’*’)
**	renvoie le tableau ["salut", "les", "etudiants"].
*/

static size_t	how_many_words(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			j++;
			i++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (j);
}

static void		ft_strsplit_bulk16(size_t *len, size_t *pointeur_i,
												char const *s, char *dst)
{
	size_t	i;

	i = 0;
	while (pointeur_i + 16 < len)
	{
		dst[i] = s[*pointeur_i];
		dst[i + 1] = s[*pointeur_i + 1];
		dst[i + 2] = s[*pointeur_i + 2];
		dst[i + 3] = s[*pointeur_i + 3];
		dst[i + 4] = s[*pointeur_i + 4];
		dst[i + 5] = s[*pointeur_i + 5];
		dst[i + 6] = s[*pointeur_i + 6];
		dst[i + 7] = s[*pointeur_i + 7];
		dst[i + 8] = s[*pointeur_i + 8];
		dst[i + 9] = s[*pointeur_i + 9];
		dst[i + 10] = s[*pointeur_i + 10];
		dst[i + 11] = s[*pointeur_i + 11];
		dst[i + 12] = s[*pointeur_i + 12];
		dst[i + 13] = s[*pointeur_i + 13];
		dst[i + 14] = s[*pointeur_i + 14];
		dst[i + 15] = s[*pointeur_i + 15];
		i += 16;
		*pointeur_i += 16;
	}
}

static void		ft_strsplit_bulk8(size_t *len, size_t *pointeur_i,
												char const *s, char *dst)
{
	size_t	i;

	i = 0;
	while (pointeur_i + 8 < len)
	{
		dst[i] = s[*pointeur_i];
		dst[i + 1] = s[*pointeur_i + 1];
		dst[i + 2] = s[*pointeur_i + 2];
		dst[i + 3] = s[*pointeur_i + 3];
		dst[i + 4] = s[*pointeur_i + 4];
		dst[i + 5] = s[*pointeur_i + 5];
		dst[i + 6] = s[*pointeur_i + 6];
		dst[i + 7] = s[*pointeur_i + 7];
		i += 8;
		*pointeur_i += 8;
	}
}

static char		*take_word_in_str(size_t *pointeur_i, char const *s, char c)
{
	size_t	len;
	size_t	i;
	char	*new_str;

	len = *pointeur_i;
	i = 0;
	while (s[len] && s[len] != c)
		len++;
	new_str = ft_strnew(len - *pointeur_i);
	if (new_str)
	{
		ft_strsplit_bulk16(&len, pointeur_i, s, new_str);
		ft_strsplit_bulk8(&len, pointeur_i, s, new_str);
		while (*pointeur_i < len)
		{
			new_str[i] = s[*pointeur_i];
			i++;
			*pointeur_i += 1;
		}

		return (new_str);
	}
	return (0);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	tab = NULL;
	if (s)
		tab = (char **)malloc(sizeof(char *) * (how_many_words(s, c) + 1));
	if (tab)
	{
		while (j < how_many_words(s, c))
		{
			while (s[i] == c)
				i++;
			if (s[i] != c && s[i])
				tab[j++] = take_word_in_str(&i, s, c);
		}
		tab[j] = 0;
		return (tab);
	}
	return (0);
}
