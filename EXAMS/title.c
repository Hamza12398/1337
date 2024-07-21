#include <unistd.h>
#include <stdio.h>

void titleCase(char *str)
{
  int i = 0;
  int inword = 0;

  while (str[i])
  {
    if (str[i] != ' ')
    {
      if (inword == 0 && str[i] >= 'a' && str[i] <= 'z')
      {
        str[i] -= 32;
      }
      else if (inword == 1 && str[i] >= 'A' && str[i] <= 'Z')
      {
        str[i] += 32;
      }
      inword = 1;
    }
    else
    {
      inword = 0;
    }
    i++;
  }
}


int main()
{
  char str[] = "hamza cherkaoui is heRe ThAnKS";
  title(str);
  printf("%s\n", str);
  return 0;
}