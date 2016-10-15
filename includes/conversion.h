/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 15:15:02 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/15 23:44:49 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
# define CONVERSION_H

# include "libft.h"

/*
**	Conversion
*/

int		ft_atoi(const char *str);
int		ft_atoi_base(char *str, int base);
char	*ft_itoa(int n);
char	*ft_itoa_base(long n, int base);
char	*ft_litoa(long int n);
char	*ft_litoa_base(long int value, int base);
char	*ft_utoa_base(unsigned long int n, int base);
char	*ft_ulitoa(unsigned long n);
char	*ft_ulitoa_base(unsigned long value, int base);
char	*ft_get_number(const char *str, size_t *i);
char	*ft_wcconv(wchar_t wchar);
char	*ft_wcsconv(wchar_t *ws);

#endif
