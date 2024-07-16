#include <stdio.h>


// * count_alen.c

// * create a function that returns the length of a string till an 'a', if 'a' dosent exist it in the string it will simply return the whole strings length

int count_alen(char* str) {
    int length = 0;

    while (*str) {
        if (*str == 'a') 
        {
            break;
        }
        length++;
        str++;
    }

    return length;
}

int main() {
    char str[] = "hello hamza";
    int len = count_alen(str);
    printf("Length until 'a': %d\n", len);
    return 0;
}