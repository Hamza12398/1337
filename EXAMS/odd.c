#include <unistd.h>
#include <stdio.h>


// *project name: odd.c

// *create a program that only writes the character if the index its not on in is a multiple of 2.

void odd(char *str) 
{
    int index = 0;

    while (*str != '\0') 
    {
        if (index % 2 != 0)
        {
            write(1, str, 1);
        }
        str++;
        index++;
    }
    write(1, "\n", 1);
}

int main() 
{
    char *text = "hamzacherkaoui";
    odd(text);

    return 0;
}