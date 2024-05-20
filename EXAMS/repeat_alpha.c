// Assignment name  : repeat_alpha
// Expected files   : repeat_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called repeat_alpha that takes a string and display it
// repeating each alphabetical character as many times as its alphabetical index,
// followed by a newline.

// 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

// Case remains unchanged.

// If the number of arguments is not 1, just display a newline.


#include <stdio.h>

int main(int ac, char **av)
{
	int i = 0;
	int rep; // counter to count the alpha position in ascii table
	char c;
	if (ac == 2)
	{
		while (av[1][i])
		{
			c = av[1][i]; 
			if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) // if it's a alpha
			{
				if (c >= 'a' && c <= 'z')
					rep = c - 'a';
				if (c >= 'A' && c <= 'Z')
					rep = c - 'A';
				while (rep > 0) // when the counter is greater then 0 then write it
				{
					write (1, &c, 1);
					rep--;
				}
			}
			write (1, &c, 1); // anyways write each word for one time.
		    i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}



// FUNCTION
int repeat(char str[]) 
{
  int i = 0;
	int rep; // counter to count the alpha position in ascii table
	char c;

    while (str[i])
		{
			c = str[i]; 
			if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) // if it's a alpha
			{
				if (c >= 'a' && c <= 'z')
					rep = c - 'a';
				if (c >= 'A' && c <= 'Z')
					rep = c - 'A';
				while (rep > 0) // when the counter is greater then 0 then write it
				{
					write (1, &c, 1);
					rep--;
				}
			}
			write (1, &c, 1); // anyways write each word for one time.
		    i++;
		}
}

int main()
{
  char str[] = "abc";
  repeat(str);
  return 0;
}

