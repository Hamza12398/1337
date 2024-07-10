#include <unistd.h>
// void rush(int x, int y)
// {
//     int h;
//     int w;

//     h= 0;
//     while (h < y)
//     {
//         w = 0;
//         while (w < x)
//         {
//             if ((w == 0 && h == 0) || (w ))
//                 write (1,"/", 1);
//             else if ((h == 0 || h == y - 1))
//               write (1,"\\", 1);
//             else if (w == 0 || w == x - 1)
//                 write (1,"*", 1);
//             else if ((h == 0 || h == y - 1))
//                 write(1, "*", 1);
//             else if ((w != 0 || w != x - 1))
//               write (1, " ", 1);
//             else
//                 write(1, " ", 1);
//             w++;
//         }
//         write(1, "\n", 1);
//             h++;    
//     }
// }
// int main()
// {
//     rush(5,3);
//     return 0;
// }




void rush(int x, int y)
{
    int h;
    int w;

    h= 0;
    while (h < y)
    {
        w = 0;
        while (w < x)
        {
            if ((w == 0 && h == 0) || (w == x - 1 && h == y - 1))
                write (1,"/", 1);
            else if ((w == 0 && h == y - 1) || (w == x -1 && h == 0))
                write (1,"\\", 1);
            else if (w == 0 || w == x - 1)
                write (1,"*", 1);
            else if ((h == 0 || h == y - 1) && (w != 0 || w != x - 1))
                write(1, "*", 1);
            else
                write(1, " ", 1);
            w++;
        }
        write(1, "\n", 1);
            h++;    
    }
}
int main()
{
    rush(4, 4);
    return 0;
}


// void ft_putchar(char c) {
//     write(1, &c, 1);
// }

// void ft_putchar(char c);

// void print_line(int x, char start, char middle, char end) {
//     int i;

//     if (x > 0) {
//         ft_putchar(start);
//     }
//     i = 1;
//     while (i < x - 1) {
//         ft_putchar(middle);
//         i++;
//     }
//     if (x > 1) {
//         ft_putchar(end);
//     }
//     ft_putchar('\n');
// }

// void rush(int x, int y) {
//     int i;

//     if (x <= 0 || y <= 0) {
//         return;
//     }

//     print_line(x, 'o', '-', 'o');
//     i = 1;
//     while (i < y - 1) {
//         print_line(x, '|', ' ', '|');
//         i++;
//     }
//     if (y > 1) {
//         print_line(x, 'o', '-', 'o');
//     }
// }


// void rush(int x, int y);

// int main() {
//     rush(4, 4);
//     return 0;
// }
