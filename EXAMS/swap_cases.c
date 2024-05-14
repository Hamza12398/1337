#include <stdio.h>
#include <stdlib.h>


char *swap_cases(char *str) {
  int i = 0 ;

  while (str[i])
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] = str[i] - 32;
    }
    else if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] = str[i] + 32;
    }
    i++;
  }
  return str;
}

int main() {
  char str[100] = "hamza";
  printf("%s", swap_cases(str));
  return 0;
}