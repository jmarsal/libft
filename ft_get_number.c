#include "libft.h"

static char	*init_number(const char *str, size_t *i, size_t sign)
{
	size_t	len;
	char	*number;

	len = 0;
	while (ft_isdigit(str[*i + len]) && str[*i + len])
		++len;
	len = (sign) ? ++len : len;
	if (!(number = ft_memalloc(sizeof(char) * (len + 1))))
		return (NULL);
	return (number);
}

char		*ft_get_number(const char *str, size_t *i)
{
	size_t	sign;
	size_t	index;
	char	*number;

	sign = (str[*i] == '-') ? 1 : 0;
	index = 0;
	if (!(number = init_number(str, i, sign)))
		return (NULL);
	if (sign)
		number[index++] = '-';
	while (str[*i + index] && ft_isdigit(str[*i + index]))
	{
		number[index] = str[*i + index];
		index++;
	}
	number[index] = '\0';
	*i += index;
	return (number);
}