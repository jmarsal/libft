/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_color_mlx.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/19 00:12:48 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/12 16:00:46 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_color_mlx(const char *line, size_t *i)
{
	int		len;
	int		color;
	char	*number;

	*i += 2;
	len = 0;
	while (!ft_isspace(line[*i + len]) && line[*i + len])
		++len;
	if (!(number = ft_memalloc(sizeof(char) * (len + 1))))
		return (-1);
	len = 0;
	while (line[*i + len] != ' ' && line[*i + len])
	{
		number[len] = line[*i + len];
		len++;
	}
	number[len] = '\0';
	color = ft_atoi_base(number, 16);
	free(number);
	number = NULL;
	return (color);
}
