/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 11:08:01 by jmarsal           #+#    #+#             */
/*   Updated: 2016/10/03 23:20:19 by jmarsal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# define GNL_BUFF_SIZE 1024
# define EOL '\n'

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
** Memory management
*/

void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *s, int c, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
void				*ft_realloc(void *ptr, size_t size, size_t oldsize);

/*
** Output
*/

void				ft_putchar(char c);
void				ft_putnbr(int nb);
void				ft_putlnbr(long int nb);
void				ft_putllnbr(long long nb);
void				ft_putstr(char const *str);
void				ft_putendl(char const *s);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_print_memory(const void *addr, size_t size);

/*
** File management
*/

int					ft_get_next_line(const int fd, char **line);

/*
**	Char control
*/

int					ft_isupper(int c);
int					ft_islower(int c);
int					ft_isspace(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isascii(int c);
int					ft_isalnum(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

/*
**	String control
*/

size_t				ft_strlen(const char *str);
size_t				ft_strnlen(const char *str, size_t len);
char				*ft_strchr_bef(const char *s, int c);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strnstr(const char *big, const char *little,
								size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);

/*
**	Sring Management
*/

char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
char				*ft_strtoupper(char *str);
char				*ft_strtolower(char *str);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t nb);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
char				*ft_strtrim(char const *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				**ft_strsplit(char const *s, char c);
char				*ft_strrev(char *str);
char				*ft_strreplace(const char *str, const char *find,
									const char *replace);

/*
**	Conversion
*/

int					ft_atoi(const char *str);
int					ft_atoi_base(char *str, int base);
char				*ft_itoa(int n);
char				*ft_litoa(long int n);
char				*ft_ulitoa(unsigned long n);
char				*ft_itoa_base(int value, int base);
char				*ft_litoa_base(long int value, int base);
char				*ft_ulitoa_base(unsigned long value, int base);
char				*ft_get_number(const char *str, size_t *i);

/*
**	Mathematics
*/

int					ft_abs(int n);
int					ft_min(int a, int b);
int					ft_max(int a, int b);

/*
**	Linked list management
*/

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstadd_end(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/*
** Mlx
*/

int					ft_get_color_mlx(const char *line, size_t *i);

#endif
