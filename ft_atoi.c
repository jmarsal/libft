/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/01 23:17:49 by jmarsal           #+#    #+#             */
/*   Updated: 2016/05/16 21:39:29 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** converts the string argument str to an integer (type int).
** *str -- This is the string representation of an integral number.
** This function returns the converted integral number as an int value.
** If no valid conversion could be performed, it returns zero.
*/

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	value;

	i = 0;
	n = 0;
	value = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
			|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == 45)
		n = 1;
	if ((str[i] == 45) || (str[i] == 43))
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		value *= 10;
		value += ((int)str[i] - 48);
		i++;
	}
	if (n == 1)
		return (-value);
	else
		return (value);
}
