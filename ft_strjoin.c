#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*answer;
	int	answersize;
	int	i;

	answersize = 0;
	i = 0;
	answersize = ft_strlen(s1 + s2) + 1;
	answer = malloc((sizeof char) * answersize);
	while (i < answersize)
	{
		answer
