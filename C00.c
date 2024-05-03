#include <unistd.h>
#include <stdio.h>


void ft_putchar(char c) {
  write(1, &c, 1);
}

//! ft_print_numbers

#include <unistd.h>
void	ft_print_numbers(void)
{
	char	x;

	x = '0';
	while (x <= '9')
	{
		write (1, &x, 1);
		x++;
	}
}

int	main()
{
	ft_print_numbers();
}



//! ft_print_comb


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



//! ft_print_comb2



// void ft_print_comb2() {
//   int a;
//   int x;

//   a = '0';
//   while (a <= 98)
//   {
//     x = a + 1;
//     while (x <= 99)
//     {
//       ft_putchar('0' + a / 10);  // 0 + 0 / 10 = 0
//       ft_putchar('0' + a % 10); // 0 + 0 % 10 = 0
//       ft_putchar(' '); // " "
//       ft_putchar('0' + x / 10); // 0 + 1 / 10 = 0
//       ft_putchar('0' + x % 10); // 0 + 1 % 10 = 0
//       if (a != 98)
//       {
//         write(1 , ", ", 2);  // ', '
//       }
//       x++;
//     }
//     a++;
//   } 
// }

// int main() {
//   ft_print_comb2();
//   return (0);
// }




void ft_print_number(void) {
	int x = '0';

	while (x <= '9') {
	{
		write(1, &x, 1);
		x++;
	}
}
}
int main() {
	ft_print_number();
  return (0);
}


void    ft_print_comb(void) {
	int a;
	int b;
	int c;

	a = '0';
	while (a <= '7') {
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a!= '9') {
					write(1, ", ", 2);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
}

int main() {
  ft_print_comb();
  return (0);
}




// void	ft_putnbr(int nb)
// {
// 	if(nb == 2147483648) {
//     ft_putchar('-');
//     ft_putchar('2');
//     ft_putnbr(147483648);
//     return;
//   } else if (nb < 0)
//   {
//     ft_putchar('-');
//     nb = -nb;
//     ft_putnbr(nb);
//   } else if (nb > 9)
//   {
//     ft_putnbr( nb / 10);
//     ft_putnbr( nb % 10);
//   }
//   else 
//   ft_putchar(nb + '0');
  
// }
// int main (void)
// {
// 	ft_putnbr(4563);
//   ft_putchar('\n');
// 	ft_putnbr(-1);

// }


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void   ft_putnbr(int nbr)
{
    if (nbr < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nbr);
    }
    else if (nbr > 9)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else
    {
        ft_putchar(nbr + '0');
    }
}

int main (void)
{
	ft_putnbr(4563);
  ft_putchar('\n');
	ft_putnbr(-1);

}
