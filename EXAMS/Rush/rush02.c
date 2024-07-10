#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putchar(char c);

void print_line(int x, char start, char middle, char end) {
    int i;

    if (x > 0) {
        ft_putchar(start);
    }
    i = 1;
    while (i < x - 1) {
        ft_putchar(middle);
        i++;
    }
    if (x > 1) {
        ft_putchar(end);
    }
    ft_putchar('\n');
}

void rush02(int x, int y) {
    int i;

    if (x <= 0 || y <= 0) {
        return;
    }

    print_line(x, 'A', 'B', 'A');
    i = 1;
    while (i < y - 1) {
        print_line(x, 'B', ' ', 'B');
        i++;
    }
    if (y > 1) {
        print_line(x, 'C', 'B', 'C');
    }
}
int main()
{
    rush02(4, 4);
    ft_putchar('\n');
    rush02(1, 1);
    return 0;
}