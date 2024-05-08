#include <unistd.h>
#include <stdio.h>

// void ft_putchar(char c) {
//   write(1, &c, 1);
// }


// ! ft_countdown.c 

// int main(void) {
//   char num;
//   num = '9';
//   while (num >= '0') {
//     write(1, &num, 1);
//     num--;
//   }
//   write(1, "\n", 1);
// 	return (0);
// }

// int main(void) {
//   write(1, "9876543210\n", 11);
// }




// ! ft_print_numbers.c

// int main(void) {
//   char num;
//   num = '0';
//   while (num <= '9') {
//     write(1, &num, 1);
//     num++;
//   }
//   write(1, "\n", 1);
//   return (0);
// }


// ! hello.c

// int main(void) {
//   write(1, "Hello, World!\n", 14);
//   return (0);
// }

// ! vft_swap.c 

// void	ft_swap(int *a, int *b) {
//   int temp;
//   temp = *a;
//   *a = *b;
//   *b = temp;
// }

// int main() {
//   int a = 10;
//   int b = 20;
//   printf("a = %d, b = %d\n", a, b);
//   ft_swap(&a, &b);
//   printf("a = %d, b = %d\n", a, b);
//   return (0);
// }


  // ! ft_strcmp.c

  // int    ft_strcmp(char *s1, char *s2){
  //   int i = 0;
  //   while (s1[i] == s2[i] && s1[i]!= '\0' && s2[i]!= '\0')
  //     i++;
  //   return (s1[i] - s2[i]);
  // }



  // int	main(int argc, char **argv) {
  //   int i; 
  //   i = 0;

  //   if(argc == 2)  {
  //     while (argv[1][i]) {
  //         if (argv[1][i] == 'a')
  //         {
  //           write(1, "a", 1);
  //           break;
  //         }          
  //       i++;
  //     }
  //   }
  //   else 
  //   write(1, "\n", 1);
  // }

// int main() {
//   // char i = '9';
//   int i = 9;

//   while (i >= 0)
//   {
//     write(1, &i, 1);
//     i--;
//   }
//   write(1, "\n", 1);
//   return 0;
// }

// void	ft_print_numbers(void)
// {
// 	char	n;
// 	n = '0';
// 	while (n <= '9')
// 	{
// 		write(1, &n, 1);
// 		n++;
// 	}
// 	write(1, "\n", 1);
// }

// int  main(void){
//   ft_print_numbers();
//   return (0);
// }


#include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// int	main(void)
// {
// 	int	i;

// 	// i = 97;
//   i = 'a';
// 	while (i <= 'z') 
// 	{
// 		if (i % 2 != 0)
// 			ft_putchar(i - 32);  
// 		else
// 			ft_putchar(i);
// 		i++;
// 	}
// 	ft_putchar('\n');
// 	return (0);
// }


// int	main(int argc, char **argv)
// {
// 	if (argc > 1)
// 		while (*argv[1])
// 			write(1, argv[1]++, 1);
// 	write(1, "\n", 1);
// 	return (0);
// }

// int main(int argc, char **argv) {
//     if (argc > 1) {
//         while (*argv[argc - 2]) {
//             write(1, argv[argc - 2]++, 1);
//         }
//     }
//     write(1, "\n", 1);
//     return 0;
// }



// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// int main() {
//   int i = 'a';

// 	while (i <= 'z')
// 	{
// 		if (i % 2 == 0)
// 		{
// 			ft_putchar(i - 32);
// 		}
// 		else 
// 		{
//       ft_putchar(i);
//     }
// 	i++;
// 	}
// 	ft_putchar('\n');
// 	return (0);
// }


// void	ft_swap(int *a, int *b){
// 	int temp;
//   temp = *a;
//   *a = *b;
//   *b = temp;
// }

// int main() {
// 	int a = 10;
//   int b = 20;
//   printf("a = %d, b = %d\n", a, b);
//   ft_swap(&a, &b);
//   printf("a = %d, b = %d\n", a, b);
//   return (0);
// }

// int		ft_strcmp(char *s1, char *s2)
// {
// 	int i;

// 	i = 0;
// 	while (s1[i]  && s2[i]  && s1[i] == s2[i]){

// 		i++;
// 	}
// 	return (s1[i] - s2[i]);
// }

// int main() {
// 	char s1[] = "abcd";
//   char s2[] = "abcb";
//   printf( "%d", ft_strcmp(s1, s2));
//   return 0;
// }

// int		ft_strcmp(char *s1, char *s2) {
// 	int i = 0;

// 	while (s1[i] == s2[i] && s1[i] && s2[i])
// 	{
// 		++i;
// 	}
// 	return s1[i] - s2[i];
// }

// int main() {
// 	char s1[] = "abcd";
//   char s2[] = "abcb";
//   printf( "%d", ft_strcmp(s1, s2));
//   return 0;
// }


#include <stdio.h>

int count_letter_a( char* string) {
    int count = 0;
    int i = 0;

    while (string[i]) {
        if (string[i] == 'a') {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
  char input_string[] = "Abracadabra";
    int result = count_letter_a(input_string);
    printf("Count: %d\n", result); 

    return 0;
}