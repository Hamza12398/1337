#include <unistd.h>
#include <stdio.h>


// * project name: count_words.c

// *  create a function that returns the count of words in a given string


int count_word(const char *str) 
{
    int count = 0;
    int isWord = 0;
    int i = 0;


    while (str[i] != '\0') 
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') 
        {
            isWord = 0;  
        }
        else if (isWord == 0) 
        {
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


// count AKA Adil

// #include <stdio.h>

// int count_word(char *str)
// {
//     int i = 0;
//     int count = 1;

//     while(str[i])
//     {
//         if((str[i] == ' ' || str[i] == '\t') && (str[i + 1] >= 33 && str[i + 1] <= 126))
//         {
//             count++;
//         }
//         i++;
//     }
//     return count;
// }
// int main()
// {
//     char str[] = "alo habibi    cv       awdwad dw9 998wa";
//     int res = count_word(str);

//     printf("%d\n", res);
//     return 0;
// }