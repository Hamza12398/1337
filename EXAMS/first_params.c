#include <unistd.h>

int main(int ac, char **av)
{
  int i = 0;

  if (ac > 1)
  {
    while (av[1][i])
    {
      write(1, &av[ac][i++], 1);
    }
  }
  write(1, "\n", 1);
  return (0);
}
