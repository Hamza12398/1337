#include <unistd.h>

int main (int ac, char **a)
{
	if (ac == 2)
	{
		int i = 0;

		while (a[1][i])
    {
			i++;
    }
		i--;

		while (a[1][i] > 32)
    {
			i--;
    }
		i++;
		while (a[1][i])
		{
			write(1, &a[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}



void	last_word(char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	i -= 1;
	while(str[i] == '\t' || str[i] == 32)
		i--;
	while (i > 0)
	{	if(str[i] == 32 || str[i] == '\t')
			break;
		i--;
	}
	i++;
	while (str[i] != '\0' && str[i] != 32 && str[i] != '\t')
	{
		write(1, &str[i], 1);
		i++;
	}
}
int main()
{
	char s1[] = "hamza cherkaoui";
	last_word(s1);
	return (0);
}