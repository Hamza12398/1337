#include <stdio.h>


// * project name: count_lines.c

// * create a function that returns the lines in a given string


int count_lines(char* str) {
    int i = 0;
    int count = 0;

    while (str[i]) {
        if(str[i]=='\n') {
          count++;
        }
        i++;
    }

    if (str[i - 1] != '\n') {
      count++;
  }

  return count;
}

int main() {
    char str[] = "Hello, how\n are you?\n I'm\n fine.\n";
    int lineCount = count_lines(str);
    printf("Line count: %d\n", lineCount);

    return 0;
}