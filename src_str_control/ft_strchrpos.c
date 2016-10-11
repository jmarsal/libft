/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrpos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 16:30:10 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/10 16:35:33 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strchrpos(const char *str, char chr)
{
	unsigned int	pos;

	pos = 0;
	while (*str)
	{
		if (*str == chr)
			return (pos);
		++str;
		++pos;
	}
	return (-1);
}
