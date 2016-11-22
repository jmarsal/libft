/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcconv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 12:50:35 by jmarsal           #+#    #+#             */
/*   Updated: 2016/11/22 13:57:52 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	converti un wchar en char *
**
**	Rappel : l'operateur & permet de garder les 1 en commun
**	Ex :	10001010 &
**			11110110 =
**			10000010
**
**	0xxxxxxx // 0x00
**	Aucune action
**
**	110xxxxx 10xxxxxx // 0xC0 0x80
**	Je deplace de 6 sur la droite et j'ajoute 11000000
**	Je filtre par 111111 et j'ajoute 10000000
**
**	1110xxxx 10xxxxxx 10xxxxxx // 0xE0 0x80 0x80
**	Je deplace de 12 sur la droite et j'ajoute 11100000
**	Je deplace de 6, je filtre par 111111 et j'ajoute 10000000
**	Je filtre par 111111 et j'ajoute 10000000
**
**	11110xxx 10xxxxxx 10xxxxxx 10xxxxxx // 0xF0 0x80 0x80 0x80
**	Je deplace de 18 sur la droite et j'ajoute 11110000
**	Je deplace de 12 sur la droite, je filtre par 111111 et j'ajoute 10000000
**	Je deplace de 6 sur la droite, je filtre par 111111 et j'ajoute 10000000
**	Je filtre par 111111 et j'ajoute 10000000
*/

char	*ft_wcconv(wchar_t wchar)
{
	char	*str_tmp;

	str_tmp = ft_strnew(4);
	if (wchar <= 0x7f)
		str_tmp[0] = wchar;
	else if (wchar <= 0x7ff)
	{
		str_tmp[0] = (wchar >> 6) + 0xC0;
		str_tmp[1] = (wchar & 0x3F) + 0x80;
	}
	else if (wchar <= 0xffff)
	{
		str_tmp[0] = (wchar >> 12) + 0xE0;
		str_tmp[1] = ((wchar >> 6) & 0x3F) + 0x80;
		str_tmp[2] = (wchar & 0x3F) + 0x80;
	}
	else
	{
		str_tmp[0] = (wchar >> 18) + 0xF0;
		str_tmp[1] = ((wchar >> 12) & 0x3F) + 0x80;
		str_tmp[2] = ((wchar >> 6) & 0x3F) + 0x80;
		str_tmp[3] = (wchar & 0x3F) + 0x80;
	}
	return (str_tmp);
}
