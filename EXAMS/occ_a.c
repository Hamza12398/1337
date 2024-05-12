#include <stdio.h>

//  * project name :occ_a.c  

// * create a function that returns the number of 'A' in a given string.

int occ_a(char* str) {
  int count = 0;
  int i = 0;
  
  while (str[i]) {
      if (str[i] == 'A' || str[i] == 'a') {
          count++;
      }
      i++;
  }
  return count;
}
int main() {
	char str[100] = "abcdaa";
  printf("%d\n", occ_a(str));
  return 0;
}
