#include "libft.h"

static char	*init_number(const char *line, size_t *i, size_t sign)
{
	size_t	len;
	char	*number;

	len = 0;
	while (ft_isdigit(line[*i + len]) && line[*i + len])
		++len;
	len = (sign) ? ++len : len;
	if (!(number = ft_memalloc(sizeof(char) * (len + 1))))
		return (NULL);
	return (number);
}

int			ft_get_number(const char *str, size_t *i)
{
	size_t	sign;
	size_t	index;
	char	*number;
	int		ret;

	sign = (line[*i] == '-') ? 1 : 0;
	index = 0;
	if (!(number = init_number(line, i, sign)))
		return (NULL);
	if (sign)
		number[index++] = '-';
	while (line[*i + index] && ft_isdigit(line[*i + index]))
	{
		number[index] = line[*i + index];
		index++;
	}
	number[index] = '\0';
	*i += index;
	return (ret = ft_atoi((const)number));
}
