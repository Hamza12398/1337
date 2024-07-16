#include <unistd.h>

void  ft_print_comb2(void) {
    int i = 0;
    int j;
    char num[5];

    while (i <= 98) {
        j = i + 1;
        while (j <= 99) 
        {
            num[0] = i / 10 + '0';
            num[1] = i % 10 + '0';
            num[2] = ' ';
            num[3] = j / 10 + '0';
            num[4] = j % 10 + '0';

            write(1, num, 5);
            if (i != 98 || j != 99) {
                write(1, ", ", 2);
            }
            j++;
        }
        i++;
    }
}

// int main() {
//     ft_print_comb2();
//     return 0;
// }
