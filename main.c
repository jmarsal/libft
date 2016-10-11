/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 16:42:02 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/11 11:17:27 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>

int		main(void)
{
	t_array	*test;
	int		i = 0;
	char	*s1 = "coucou moi";
	int		nb = 42;

	test = ft_array_create(4);
	while (i < 8)
	{
		ft_array_add(test, (void*)nb);
		i++;
	}
	ft_array_add(test, NULL);
	i = 0;
	while (*test->cells)
	{
		ft_putnbr((int)*test->cells);
		ft_putchar('\n');
		test->cells++;
	}
	return (0);
}
