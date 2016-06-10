/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/10 15:54:09 by jmarsal           #+#    #+#             */
/*   Updated: 2016/06/10 16:20:37 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main()
{
	char **test;
	int	i;

	i = 0;
	test = ft_strsplit("salut les copains comment allez vous ?", ' ');
	while (test[i])
	{
		printf("%s\n", test[i]);
		i++;
	}
	return (0);
}
