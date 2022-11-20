
#include "libft.h"

char	*ft_strnstr(const char *pizza, const char *slice, size_t len)
{
	size_t	p;
	size_t	s;

	p = 0;
	if (!slice[0] || !slice)
		return ((char *)pizza);
	while (pizza[p] != '\0')
	{
		s = 0;
		while (pizza[p + s] == slice[s] && (p + s) < len)
		{
			if (pizza[p + s] == '\0' && slice[s] == '\0')
				return ((char *)&pizza[p]);
			s++;
		}
		if (slice[s] == '\0')
			return ((char *)pizza + p);
		p++;
	}
	return (0);
}
