#include <unistd.h>
#include <stdio.h>

// * project name :interval_space.c

// *create a program that writes three whitespaces between each character in an argument,if the number of arguments is different than 2 the program will return a newline


int main(int ac, char *av[]) {
  int i;
  i = 0;

  if (ac == 2) {
  {
    while (av[1][i])
    {
      write(1, &av[1][i], 1);
      if (av[1][i + 1] == '\0')
          break;
        i++;
      write(1,"   ", 3);
    }
    
  }
  write(1, "\n", 1);
  return 0;
}
}



