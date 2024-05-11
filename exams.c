#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c) {
  write(1, &c, 1);
}



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


// ! ft_print_numbers.c
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


// ! ft_swap.c
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


// ! ft_strcmp.c
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


// ! ft_strcmp.c
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


// ! occ_a.c
// int count_letter_a( char* string) {
//     int count = 0;
//     int i = 0;

//     while (string[i]) {
//         if (string[i] == 'a') {
//             count++;
//         }
//         i++;
//     }
//     return count;
// }

// int main() {
//   char input_string[] = "Abracadabra";
//     int result = count_letter_a(input_string);
//     printf("Count: %d\n", result); 

//     return 0;
// }


// ! aff_a.c 

// int	main(int argc, char **argv)
// {
//   int i = 0;

//   if (argc == 2) 
//     while (argv[1][i] != '\0') 
//     {
//       if (argv[1][i] == 'a')
//       {
//         ft_putchar('a');
//         break;
//       }
//       i++;
//     }
//   else 
//   {
//     ft_putchar('a');
//     ft_putchar('\n');
//   }
// }


// ! maff_alpha.c

// int main() {
//   int i = 'a';

//   while (i <= 'z')
//   {
//     if (i % 2 == 0) // even number
//     if (i % 2 != 0) // odd number
//     {
//       ft_putchar(i - 32);
//     }
//     else 
//     {
//       ft_putchar(i);
//     }
//     i++;
//   }
// }

// int main() {
//   int i = '0';

//   while (i <= '9')
//   {
//     if (i % 2 == 0)
//     {
//       ft_putchar(i);
//     }
//     i++;
//   }
// }


// ! aff_first_param.c
// #include <unistd.h>

// int	main(int argc, char **argv)
// {
// 	if (argc > 1)
// 		while (*argv[1 ])
// 			write(1, argv[1]++, 1);
// 	write(1, "\n", 1);
// 	return (0);
// }


// ! last_param.c

//  int	main(int argc, char **argv)
// {
// 	if (argc > 1)
// 		while (*argv[argc -1])
// 			write(1, argv[argc - 1 ]++, 1);
// 	write(1, "\n", 1);
// 	return (0);
// }



// ! ft_strcpy

// char	*ft_strcpy(char *dest, char *src)
// {
// 	int	i;

// 	i = 0;
// 	while (src[i])
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (dest);
// }

// int main() {
//   char dest[100];
//   char src[100] = "Hello";
//   ft_strcpy(dest, src);
//   printf("%s\n", dest);
//   return 0;
// }


// ! first_word.c

// int main(int ac, char **av) {
//   int i = 0;
  
//   if (ac == 2)
//   {
//     while (av[1][i] == ' ' || av[1][i] == '\t')  
//       i++;
//     while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
//     {
//       write(1, &av[1][i], 1);
//       i++;
//     }
//   }
//     write(1, "\n", 1);
//     return 0;
// }


// ! ft_strlen.c
// int		ft_strlen(char *str) {
//   int i = 0;

//   while (str[i])
//     i++;
//   return i;
// }

// int main() {
//   char str[] = "hamza";
//   printf("%d\n", ft_strlen(str));
//   return 0;
// }

// ! swap.c

// void  ft_swap(int *a, int *b) {
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
//   return 0;
// }


// ! rev_print.c

// int		ft_strlen(char *str) {
//   int i = 0;

//   while (str[i])
//     i++;
//   return i;
// }

// char *ft_print(char *str) {
//   int i = ft_strlen(str) - 1;
//   while (i >= 0) {
//   {
//     write(1, &str[i], 1);
//     i--;
//   }
//   write(1, "\n", 1);
//   return (str);
// }
// }

// int main() {
//   char str[] = "hamza";
//   ft_print(str);
//   return 0;
// }



// int ft_strlen(char *str) {
//   int i = 0;

//   while (str[i])
//     i++;
//   return i;
// }

// char *ft_print(char *str) {
//   int i;
//   i = ft_strlen(str) - 1;
//   // i--; // * => 'hamza' = 5 - 1 = 4
//   while (i >= 0)
//   {
//     write(1, &str[i],1);
//     i--;
//   }
//   write(1, "\n", 1);
//   return str;
// }

// int main() {
//   char str[] = "hamza";
//   ft_print(str);
//   return 0;
// }



// ! ft_strrev.c

int		ft_strlen(char *str) {
  int i = 0;

  while (str[i])
    i++;
  return i;
}

// char	*ft_strrev(char *str)
// {
// 	int i;
// 	int len;
// 	char tmp;

// 	i = 0;
// 	len = ft_strlen(str) - 1;
// 	while (len > i)
// 	{
// 		tmp = str[i];
// 		str[i] = str[len];
// 		str[len] = tmp;
// 		i++;
// 		len--;
// 	}
// 	return (str);
// }

// char *ft_strrev(char *str) {

//   int length = 0;
//   while (str[length]) {
//     length++;
//   }

//   int start = 0;
//   int end = length - 1;

//   while (start < end) {
//     char temp = str[start];
//     str[start] = str[end];
//     str[end] = temp;
//     start++;
//     end--;
//   }

//   return str;
// }

// int main() {
//   char str[] = "hamza";
//   printf("%s\n", ft_strrev(str));
//   return 0;
// }


//! rot_13.c
// void	rot13(char *str)
// {
// 	int	i = 0;

// 	while( str[i])
// 	{
// 		if( (str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm') ){
// 			str[i] += 13;
//     }
// 		else if( (str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z') ){
// 			str[i] -= 13;
//     }
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// }

// int main() {
//   char str[] = "az";
//   rot13(str);
//   return 0;
// }

// ! rotone.c
// void	ft_rotone(char *str)
// {
// 	int	i = 0;

// 	while( str[i])
// 	{
// 		if( (str[i] >= 65 && str[i] <= 89) || (str[i] >= 97 && str[i] <= 121) ){
// 			str[i] += 1;
//     }
// 		else if( (str[i] == 122 || str[i] == 90))
//     {
// 			str[i] -= 25;
//     }
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// }


// int main() {
//   char str[] = "za"; 
//   ft_rotone(str);
//   return 0;
// }

// !last_word.c

// void	last_word(char *str)
// {
// 	int	i = 0;
// 	while (str[i])
//   {
// 		i++; // 17;
//   }
// 	i -= 1; // 16;
// 	while(str[i] == '\t' || str[i] == 32)
// 		i--;
// 	while (i > 0)
// 	{	
//     // if(str[i] == 32)
//     if(str[i] == 32 && str[i] == '\t')
//     {
// 			break;
//     }
// 		i--;
// 	}
// 	i++;
// 	while (str[i] != '\0' && str[i] != 32 && str[i] != '\t')
// 	{
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// }
// int main() {
//   char str[] = "hamza simo  ilyass"; 
//   last_word(str);
//   return 0;
// }


// ! fizzbuzz.c
// void	ft_write_number(int number)
// {
// 	if (number > 9)  // 1 > 9
//   {
// 		ft_write_number(number / 10);  
//   } 
// 	write(1, &"0123456789"[number % 10], 1); // 1 % 10 = 1
// }

// int	main(void)
// {
// 	int	number;

// 	number = 1;
// 	while (number <= 100)
// 	{
// 		if (number % 3 == 0 && number % 5 == 0)
// 			write(1, "fizzbuzz", 8);
// 		else if (number % 3 == 0)
// 			write(1, "fizz", 4);
// 		else if (number % 5 == 0)
// 			write(1, "buzz", 4);
// 		else
// 			ft_write_number(number);
// 		write(1, "\n", 1);
// 		number++;
// 	}
// }


// ! LAST WORLD.C

// void	last_word(char *str) {
//   int  i = 0;
//   while (str[i]) // * str = hamza ilyass => 12
//   {
//     i++;
//   }
//   i -= 1; // * 12 - 1 = 11 
//   while (i > 0) {
//     if (str[i] == 32 || str[i] == '\t') {
//       break;
//     }
//     i--;
//   }
//   i++;
//   while (str[i]!= '\0' && str[i] != 32 && str[i]!= '\t') {
//     write(1, &str[i], 1);
//     i++;
//   }
// }

// int main() {
//   char str[] = "hamza ilyass"; 
//   last_word(str);
//   return 0;
// }

// void rot_13(char *str) {
//   int i = 0;

//   while(str[i] != '\0') {
//     if((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'z'))
//   {
//     str[i] += 13;
//   }
//   else if((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z')) 
//   {
//     str[i] -= 13;
//   }
//   write(1, &str[i], 1);
//   i++;
// }

//   write(1, "\n", 1);
// }

// int main() {
//   char str[] = "z";
//   rot_13(str);
//   return 0;
// }


// ! LAST WORD 

// void last_word(char *str) {
//   int i = 0;
//   while (str[i]) {
//     i++;
//   }
//   i -= 1;
//   while (str[i] == 32 || str[i] == '\t')
//   {
//     i--;
//   }
  
//   while (i > 0) {
//     if (str[i] == 32 || str[i] == '\t') {
//       break;
//     }
//     i--;
//   }
//   i++;
//   while (str[i]!= '\0' && str[i]!= 32 && str[i]!= '\t') {
//     write(1, &str[i], 1);
//     i++;
//   }
// }

// int main(int ac, char **av) {
//   if (ac == 2)
//   {
//     last_word(av[1]);
//   }
// }


// ! FIRST WORD

// int main(int ac, char **av) {
//   int i= 0 ;
//   if (ac == 2) {
//     while (av[1][i] == 32 || av[1][i] == '\t')
//   {
//     i++;
//   }
//     while (av[1][i]!= '\0' && av[1][i]!= 32 && av[1][i]!= '\t') {
//     write(1, &av[1][i], 1);
//     i++;
//   }
//   }
//   write(1, "\n", 1);
//   return 0;
// }


// char    *ft_strrev(char *str){
//   int i = 0;
//   int j = 0;
//   char temp;
//   while(str[i]!= '\0'){
//     i++;
//   }
//   i--;
//   while(j < i){
//     temp = str[j];
//     str[j] = str[i];
//     str[i] = temp;
//     j++;
//     i--;
//   }
//   return str;
// }

// int main() {
//   char str[] = "hamza";
//   ft_strrev(str);
//   return 0;
// }


//! atoi.c

int		ft_atoi( char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] -  48;  
		i++;
	}
	return (result * sign);
}

int main() {
  char str[] = "----8";
  ft_atoi(str);
  return 0;
}