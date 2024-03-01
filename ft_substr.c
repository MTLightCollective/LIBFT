#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char 	*answer;
	size_t	longueur;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (NULL);	
	if (len < ft_strlen(s + start))
		longueur = len;
	else
		longueur = ft_strlen(s + start);
	answer = malloc((sizeof char) * (longueur + 1));
	if (answer == NULL)
		return (NULL);
	ft_strncpy(answer, s + start, longueur);
	answer[longueur] = '\0';
	return (answer);
}
