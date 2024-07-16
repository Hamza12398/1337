#include <unistd.h>

int		check_doubles2(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		check_doubles1(char *str, char c, int pos)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++; 
	}
	return (1);
}

void	ft_union(char *str, char *str1)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (check_doubles1(str, str[i], i) == 1)
			write(1, &str[i], 1);
		i++;
	}
	i = 0;
	while (str1[i] != '\0')
	{
		if (check_doubles2(str, str1[i]) == 1)
		{
			if (check_doubles1(str1, str1[i], i) == 1)
				write(1, &str1[i], 1);
		}
		i++;
	}
}

int		main()
{
	char s1[] = "rien";
  char s2[] = "cette phrase ne cache rien";
  ft_union(s1, s2);
  return (0);
}