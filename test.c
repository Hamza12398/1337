// #include <unistd.h>
// void	ft_print_numbers(void)
// {
// 	char	x;

// 	x = '0';
// 	while (x <= '9')
// 	{
// 		write (1, &x, 1);
// 		x++;
// 	}
// }

// int	main()
// {
// 	ft_print_numbers();
// }


#include <unistd.h>

// void    ft_print_comb(void) {
//   int x;
//   int y;
//   int z; 

//   x = '0';
//   while (x <= '7') 
//   {
//     y = x + 1;
//     while (y <= '8') {
//       z = y + 1;
//       while (z <= '9') {
//         write(1, &x, 1);
//         write(1, &y, 1);
//         write(1, &z, 1);
//         if (x != '7') {
//           write(1, ",  ", 3);
//         }
//         z++;
//       }
//       y++;
//     }
//     x++;
//   }
// }

// int main() {
//   ft_print_comb();
//   return (0);
// }

void ft_putchar(char c) {
  write(1, &c, 1);
}

void ft_print_comb2() {
  int a;
  int b;

  a = '0';
  while (a <= 98)
  {
    b = a + 1;
    while (b <= 99)
    {
      ft_putchar('0' + a / 10);
      ft_putchar('0' + a % 10);
      // ft_putchar(38);
      ft_putchar('  ');
      ft_putchar('0' + b / 10);
      ft_putchar('0' + b % 10);
      if (a != 98)
      {
        write(1 , ", ", 2); 
      }
      b++;
    }
    a++;
  } 
}

int main() {
  ft_print_comb2();
  return (0);
}