#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putstr(char *str)
{
  while (*str)
    ft_putchar(*str++);
}

// int main()
// {
//   ft_putstr("Hamza \n");
//   return (0);
// }