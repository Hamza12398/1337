#include <unistd.h>
#include <stdio.h>


// * project name: count_words.c

// *  create a function that returns the count of words in a given string


int count_word(const char *str) {
    int count = 0;
    int isWord = 0;
    int i = 0;


    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            isWord = 0;  
        }
        else if (isWord == 0) {
            isWord = 1; 
            count++;   
        }
        i++; 
    }

    return count;
}

int main() {
    const char *text = "This is a sample sentence.";
    int wordCount = count_word(text);
    printf("Word count: %d\n", wordCount);
    return 0;
}