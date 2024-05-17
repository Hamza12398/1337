// * Write a program called repeat_alpha that takes a string and display it
// *repeating each alphabetical character as many times as its // *alphabetical index,
// *followed by a newline.

// *'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

// *Case remains unchanged.

// *If the number of arguments is not 1, just display a newline.

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				count = av[1][i] - 64;
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				count = av[1][i] - 96;
			while (count)
			{
				write(1, &av[1][i], 1);
				count--;
			}
			count = 1;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}



// int search(char *str)
// {
//   int i = 0;
//   int count = 0;
//   while (str[i])
//   {
//     if (str[i] >= 'a' && str[i]<='z')
//     {
//       count = str[i] - 96;
//     }
//     else if (str[i] >= 'A' && str[i] <='Z')
//     {
//       count = str[i] - 64;
//     }
//     while(count)
//     {
//       write(1, &str[i], 1);
//       count--;
//     }
//     count = 0;
//     i++;
//   }
//   write(1, "\n", 1);
//   return 0;
// }

// int main()
// {
//   char str[] = "Hello";
//   search(str);
//   return 0;
// }
