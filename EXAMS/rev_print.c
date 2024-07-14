#include <unistd.h>

int str_lenght(char *str)
{
  int i = 0;
  while (str[i] != '\0')
    i++;
  return i;
}

char *ft_rev_print(char *str)
{
  int len = str_lenght(str) - 1;

  while (len >= 0)
  {
    write(1, &str[len--], 1);
  }
  return str;
}


int main()
{
  char str[] = "hamza";
  ft_rev_print(str);
  return 0;
}



//  ! rev print Program
int main(int ac, char *av[])
{
  if (ac == 2)
  {
    int i = 0;
    while (av[1][i])
      i++;

    while (i--) 
      write(1, &av[1][i], 1);
  }
  write(1, "\n", 1);
}