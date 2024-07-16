#include <stdio.h>
#include <string.h>

int isPalindrome(char *s) 
{
    int i = 0;
    int j = strlen(s) - 1 ;

    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main() 
{
    char str1[] = "radar";
    printf("%d\n", isPalindrome(str1));
    return 0;
}
