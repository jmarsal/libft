/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_manage.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 15:10:42 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/10 15:21:52 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_MANAGE_H
# define FILE_MANAGE_H

# define GNL_BUFF_SIZE 1024
# define EOL '\n'

/*
** File management
*/

int		ft_get_next_line(const int fd, char **line);

#endif
