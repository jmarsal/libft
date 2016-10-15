/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typedef.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 14:01:51 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/16 01:07:01 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPEDEF_H
# define TYPEDEF_H

# include "libft.h"

/*
** LIST struct
*/

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/*
** GNL struct
*/

typedef struct		s_gnl
{
	int				fd;
	char			*line;
	struct s_gnl	*next;
}					t_gnl;

/*
** ARRAY struct
*/

typedef struct		s_array
{
	int				index;
	int				size;
	void			**cells;
}					t_array;

/*
** BUFFER struct
*/

typedef struct		s_buffer
{
	char			*str;
	size_t			len;
	size_t			sizemax;
}					t_buffer;

#endif
