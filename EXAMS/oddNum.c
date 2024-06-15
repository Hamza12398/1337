#include <unistd.h>


int main()
{
  int i = '0';

  while (i <= '5')
  {
    if (i % 2 != 0)
    {
      write(1, &i, 1);
    }
    i++;
  }
  return 0;
}