#include <stdio.h>

int ft_strlen(char *str)
{
  int count = 0;
  while (*str) {
    count++;
    str++;
  }
  return count;
}


int main()
{
  char word[] = "Hamza";
  int length = ft_strlen(word);
  printf("Length of the string: %d\n", length);
}