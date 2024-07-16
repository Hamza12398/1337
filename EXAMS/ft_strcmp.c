#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int    ft_strcmp(char *s1, char *s2)
{
  int i= 0;

  while (s1[i] == s2[i] && s1[i]!= '\0' && s2[i]!= '\0')
  {
    i++;
  }
  return (s1[i] - s2[i]);
}

int main() 
{
  char *s1 = "a"; // 97
  char *s2 = "b"; // 98 
  printf("%d\n", ft_strcmp(s1, s2));
  return (0);
}



