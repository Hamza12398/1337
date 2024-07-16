#include <unistd.h>
#include <stdio.h>


void	ft_sort_int_tab(int *tab, int size)
{
  int i = 0;
  int j = 0;
  int temp = 0;
  while (i < size)
  {
    j = i + 1;
    while (j < size)
    {
      if (tab[i] > tab[j])
      {
        temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
      }
      j++;
    }
    i++;
  }
}

int main()
{
	int tab[6] = {7, 6, 3, 4, 2, 5};
  ft_sort_int_tab(tab, 5);
  printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
  return (0);
}
