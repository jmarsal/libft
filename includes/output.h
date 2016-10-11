/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 15:09:27 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/10 15:27:04 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OUTPUT_H
# define OUTPUT_H

# include "libft.h"

/*
** Output
*/

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putlnbr(long int nb);
void	ft_putllnbr(long long nb);
void	ft_putstr(char const *str);
void	ft_putendl(char const *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_print_memory(const void *addr, size_t size);

#endif
