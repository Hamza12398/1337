#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	char src[] = "hamza";
	char src1[] = "hamza";
	char dest[] = "Wafsdasfasfo";
	char dest1[] = "afasasfasfasf";
	printf("%s", ft_strcpy(dest, src));
}