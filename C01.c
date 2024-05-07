#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c) {
  write(1, &c, 1);
}


// void ft_ft(int *nbr) {
//   *nbr = 42;
// }

// int main() {
//   int *ptr;
//   int number;

//   ptr = &number;
//   ft_ft(ptr);
//   printf("%d", number);
// }



// void max(int *x, int *y, int *m) {
//   if (*x > *y) {
//     *m = *x;
//   } else {
//     *m = *y;
//   }
// }

// int main() {
//   int a, b, c;

//   printf("num 1 = ");
//   scanf("%d", &a);

  
//   printf("num 2 = ");
//   scanf("%d", &b);

//   max(&a, &b, &c);
//   printf("the max is : %d\n", c);
// }

#include <unistd.h>

