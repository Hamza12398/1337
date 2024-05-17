//  * Assignment name  : ft_strrepl
//  * Expected files   : ft_strrepl.c
//  * Allowed functions: write, exit
//  * --------------------------------------------------------------------------------

//  * Write a function called ft_strrepl that takes a string, the string in which to  replace a letter (char a) by
//  * another one (char b).


//  * Your function must be declared as follows:

//  * void	ft_strrepl(char *str, char a, char b);




#include <stdio.h>
#include <unistd.h>

void	ft_strrepl(char *str, char a, char b)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == a)
			write(1, &b, 1);
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}



// void ft_strrepl(char *str, char a, char b) {
//     if (str == NULL) {
//         return;  // Handle invalid input
//     }

//     while (*str != '\0') {
//         if (*str == a) {
//             *str = b;  // Replace character
//         }
//         str++;  // Move to the next character
//     }
// }


int main() {
    char str[] = "Hello, world!";
    char a = 'o';
    char b = 'x';

    printf("Before: %s\n", str);
    ft_strrepl(str, a, b);
    printf("After:  %s\n", str);

    return 0;
}