/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/03 15:03:42 by jmarsal           #+#    #+#             */
/*   Updated: 2016/06/23 15:03:03 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi_base(char *str, int str_base)
{
    int i;
    int power;
    int uc;
    int result;

    i = ft_strlen(str) - 1;
    power = 1;
    result = 0;
    while (i >= 0)
    {
        if (str[i] == 'F' || str[i] == 'f')
            uc = 15;
        else if (str[i] == 'E' || str[i] == 'e')
            uc = 14;
        else if (str[i] == 'D' || str[i] == 'd')
            uc = 13;
        else if (str[i] == 'C' || str[i] == 'c')
            uc = 12;
        else if (str[i] == 'B' || str[i] == 'b')
            uc = 11;
        else if (str[i] == 'A' || str[i] == 'a')
            uc = 10;
        else if (str[i] >= '0' && str[i] <= '9')
            uc = str[i] - '0';
        result = result + uc * power;
        power = power * str_base;
        i--;
    }
    return (result);
}
