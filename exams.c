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

  int    ft_strcmp(char *s1, char *s2){
    int i = 0;
    while (s1[i] == s2[i] && s1[i]!= '\0' && s2[i]!= '\0')
      i++;
    return (s1[i] - s2[i]);
  }