#include <unistd.h>



void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// int		main(int ac, char **av)
// {
	// int i;
	// int i2;
	// int wdlen;

	// i = 0; // av[1] = 5;
	// i2 = 0;
	// wdlen = 0; // 5
	// if (ac == 3)
	// {
	// 	while (av[1][i])
	// 	{
	// 		while (av[2][i2])
	// 		{
	// 			if (av[1][i] == av[2][i2])
	// 			{
	// 				wdlen++;
	// 				break ;
	// 			}
	// 			i2++;
	// 		}
	// 		i++;
	// 	}
	// 	if (wdlen == ft_strlen(av[1]))
	// 		ft_putstr(av[1]);
	// }
	// write(1, "\n", 1);
	// return (0);
// }


int watch(char *s1, char *s2)
{
  int i = 0;
  int j = 0;
  int wdlen = 0;

    while (s1[i])
    {
      while (s2[j])
      {
        if (s1[i] == s2[j])
        {
          wdlen++;
          break;
        }
        j++;
      }
      i++;
    }
    if (wdlen == ft_strlen(s1))
    {
      ft_putstr(s1);
    }
  write(1, "\n", 1);
  return (0);
}

int main() 
{
	char *s1;
  char *s2;

  s1 = "hello";
  s2 = "ellaghsoz";
  watch(s1, s2);
  return (0);
}


