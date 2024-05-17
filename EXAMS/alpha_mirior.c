#include <unistd.h>

// * Assignment name  : alpha_mirror
// * Expected files   : alpha_mirror.c

// *Write a program called alpha_mirror that takes a string and displays this string
// *after replacing each alphabetical character by the opposite alphabetical
// *character, followed by a newline.

// *'a' becomes 'z', 'Z' becomes 'A'
// *'d' becomes 'w', 'M' becomes 'N'
int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac != 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
      {
				av[1][i] = 'M' - (av[1][i] - 'N'); 
      }


			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
      {
				av[1][i] = 'm' - (av[1][i] - 'n');
      }



			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


// void miror(char *str)
// {
//   int i = 0;
//   while (str[i] != '\0')
//   {
//     if (str[i] >= 'A' && str[i] <= 'Z')
//       {
// 				str[i] = 'M' - (str[i] - 'N'); 
//       }
// 			else if (str[i] >= 'a' && str[i] <= 'z')
//       {
// 				str[i] = 109 - (str[i] - 110);
//       }
// 			write(1, &str[i], 1);
// 			i++;
//   }
// }

// int main()
// {
//   char s1[] = "abc";
//   miror(s1);
// }