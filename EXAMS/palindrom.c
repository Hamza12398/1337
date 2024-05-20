#include <stdio.h>
#include <string.h>

int isPalindrome(char *s) {
    int length = strlen(s);
    int i = 0;
    int j = length - 1;

    while (i < j) {
        if (s[i] != s[j]) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main() {
    char str1[] = "radar";
    char str2[] = "hamza";
    
    printf("%d\n", isPalindrome(str1));
    printf("%d\n", isPalindrome(str2));
    
    return 0;
}
