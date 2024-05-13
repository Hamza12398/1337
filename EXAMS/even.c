#include <unistd.h>
#include <stdio.h>

// *project name: even.c

// *create a program that only writes the character if the index its on in is a multiple of 2.



void even( char *str) {
    int i = 0;

    while (str[i] != '\0') {
        if (i % 2 == 0) {
            write(1, &str[i], 1);
        }
        i++;
    }
    write(1, "\n", 1);
}

int main() {
    char *text = "Hello, World!";
    even(text);

    return 0;
}