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
// int		main(int ac, char **av)
// {

// 	if (ac == 3)
// 		inter(av[1], av[2]);
// 	write(1, "\n", 1);
// 	return (0);

// }

int main()
{
  char str[] = "hamza";
  char str1[] = "zhqweodzma";
  inter(str, str1);
  return 0;
}




// ! Code Dyl Adil AKA "LEVI"

// int dupp(char *str, char c, int pos)
// {
//     int i = 0;

//     while(i < pos)
//     {
//         if(str[i] == c)
//         {
//             return 1;
//         }
//         i++;
//     }
//     return 0;
// }

// int main(int argc, char **argv)
// {
//     int i = 0;
    
//     if(argc == 3)
//     {
//         while(argv[1][i])
//         {
//             if(!dupp(argv[1], argv[1][i], i))
//             {
//                 write(1, &argv[1][i], 1);
//             }
//             i++;
//         }
//     }
//     write(1, "\n", 1);
//     return 0;
// }