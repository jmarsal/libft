/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 00:04:11 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/17 17:52:00 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUFFER_H
# define BUFFER_H

# include "libft.h"

# define BUFFER_INIT_SIZE		64U
# define BUFFER_GROWTH_FACTOR	2U
# define BUF_NEED_RESIZE(b, l)	(b->len + l >= b->sizemax)
# define TBUFFER_MAX(b)			((b)->sizemax)
# define TBUFFER_LEN(b)			((b)->len)
# define TBUFFER_GET(b)			((b)->str)
# define TBUFFER_FREE(b)		(free((b)->str))
# define TBUFFER_RESET(b)		{(b)->len = 0; (b)->str[0] = '\0';}
# define TBUFFER_LAST(b)		((b)->str[(b)->len - 1])
# define TBUFFER_FIRST(b)		((b)->str[0])
# define TBUFFER_ISEMPTY(b)		(!((b)->len))

t_buffer	*ft_buffer_new(size_t size);
t_buffer	*ft_buffer_init(t_buffer *b, size_t size);
t_buffer	*ft_buffer_dup(const char *str);
t_buffer	*ft_buffer_ndup(const char *str, size_t len);
t_buffer	*ft_buffer_cat(t_buffer *b, const char *s);
t_buffer	*ft_buffer_ncat(t_buffer *b, const char *s, size_t len);
t_buffer	*ft_buffer_replace(t_buffer *b, const char *s);
t_buffer	*ft_buffer_nreplace(t_buffer *b, const char *s, size_t len);
t_buffer	*ft_buffer_resize(t_buffer *b, size_t len);
t_buffer	*ft_buffer_add(t_buffer *b, size_t pos, const char *s, size_t len);
size_t		ft_buffer_remove(t_buffer *b, size_t pos, size_t size);
void		ft_buffer_destroy(t_buffer **b);
t_buffer	*ft_buffer_set(t_buffer *b, int c, size_t len);
int			ft_buffer_rewind(t_buffer *b, size_t n);
size_t		ft_buffer_rewindchr(t_buffer *b, int c);
t_buffer	*ft_buffer_twin(t_buffer *b);
t_buffer	*ft_buffer_append(t_buffer *dst, t_buffer *src);
t_buffer	*ft_buffer_merge(t_buffer *b1, t_buffer *b2);
t_buffer	*ft_buffer_utoa(t_buffer *b, unsigned long long value, int base);
size_t		ft_buffer_trim(t_buffer *b, const char *set);

#endif
