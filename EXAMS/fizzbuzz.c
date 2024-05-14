#include <unistd.h>
#include <stdio.h>


//*  Assignment name  : fizzbuzz
// * Write a program that writes a sequence of numbers from 1 to 100 to the output
//* standard, all separated by a newline.

//* If the number is a multiple of 3, the program should write 'fizz' instead.

//* If the number is a multiple of 5, the program should write 'buzz' instead.

//* If the number is a multiple of 3 and a multiple of 5, the program must write
//* 'fizzbuzz' instead.


void ft_putchar(char c) 
{
  write(1 , &c , 1);
} 
void  ft_putnbr(int n)  // 34 
{
  if(n >= 0 && n <= 9) 
  {
    ft_putchar(n + 48);
  }
  else if(n > 9)  // 34 > 9
  {
    ft_putnbr(n / 10); // 34 / 10 = 3
    ft_putnbr(n % 10); // 34 % 10 = 5
  }
}

int main() 
{
  int n = 1;

  while(n <= 100) 
  {
    if(n % 3 == 0 && n % 5 == 0) 
    {
      write(1, "fizzbuzz",8);
    } 
    else if(n % 3 == 0) 
    {
      write(1, "fizz",5);
    } 
    else if(n % 5 == 0) 
    {
      write(1, "buzz",5);
    } 
    else 
    {
      ft_putnbr(n); // 34
    }
    n++;
    write(1, "\n", 1);
  }
}