
#include "libft.h"

char	*ft_strnstr(const char *haystack, \
		const char *needle, size_t len)
{
	size_t	pos;
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	pos = 0;
	while (haystack[pos] && pos < len)
	{
		i = 0;
		j = pos;
		while (needle[i] && haystack[j] == needle[i] && j < len)
		{
			i++;
			j++;
		}
		if (needle[i] == '\0')
			return ((char *)(haystack + pos));
		pos++;
	}
	return (NULL);
}
