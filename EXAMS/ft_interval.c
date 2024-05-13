#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// * project name:ft_interval.c

// * create a program that turns in an argument the character to '5' each time the index is a multiple of 3.and to '3' each time the index is a multiple of 5, and to '5' if its a multiple of both.

void ft_interval(char* str) {
    int i = 0;

    while (str[i] != '\0') {
        if ((i + 1) % 3 == 0 && (i + 1) % 5 == 0) {
            str[i] = '5';
        } else if ((i + 1) % 3 == 0) {
            str[i] = '5';
        } else if ((i + 1) % 5 == 0) {
            str[i] = '3';
        }

        i++;
    }
}

int main() {
    char str[] = "hamza hehe";
    printf("Before modification: %s\n", str);

    ft_interval(str);

    printf("After modification: %s\n", str);

    return 0;
}