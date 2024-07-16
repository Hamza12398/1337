#include <unistd.h>
#include <stdio.h>

int		check_doubles(char *str, char c, int pos)
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
void	inter(char *str, char *str1)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str1[j])
		{
			if (str[i] == str1[j])
			{
				if (check_doubles(str, str[i], i) == 1)
				{
					write(1, &str[i], 1);
					break;
				}
			}
			j++;
		}
		i++;
	}
}


int main()
{
  char str[] = "padinton";
  char str1[] = "qefwtdpajetyiytjneytjoeyjnejeyj";
  inter(str, str1);
  return 0;
}



// int		main(int ac, char **av)
// {

// 	if (ac == 3)
// 		inter(av[1], av[2]);
// 	write(1, "\n", 1);
// 	return (0);

// }






