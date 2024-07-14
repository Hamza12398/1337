#include <unistd.h>
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}




int watch(char *s1, char *s2)
{
  int i = 0;
  int j = 0;
  int wdlen = 0;

    while (s1[i])
    {
      while (s2[j])
      {
        if (s1[i] == s2[j])
        {
          wdlen++;
          break;
        }
        j++;
      }
      i++;
    }
    if (wdlen == ft_strlen(s1))
    {
      ft_putstr(s1);
    }
  write(1, "\n", 1);
  return (0);
}

int main() 
{
	char *s1;
  char *s2;

  s1 = "hamza";
  s2 = "hamza";
  watch(s1, s2);
  return (0);
}





// int		main(int ac, char **av)
// {
// 	int i1;
// 	int i2;
// 	int wdlen;

// 	i = 0; 
// 	i2 = 0;
// 	wdlen = 0; 
// 	if (ac == 3)
// 	{
// 		while (av[1][i1])
// 		{
// 			while (av[2][i2])
// 			{
// 				if (av[1][i1] == av[2][i2])
// 				{
// 					wdlen++;
// 					break;
// 				}
// 				i2++;
// 			}
// 			i1++;
// 		}
// 		if (wdlen == ft_strlen(av[1]))
// 			ft_putstr(av[1]);
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }






// #include <stdio.h>
// #include <string.h>

// int can_form_string(const char *str1, const char *str2) {
//     int i = 0, j = 0;
//     while (str1[i] != '\0' && str2[j] != '\0') {
//         if (str1[i] == str2[j]) 
// 				{
//             i++;
//         }
//         j++;
//     }
//     return str1[i] == '\0'; // abcd == true   '' == false
// }

// int main(int argc, char *argv[]) {
//     if (argc != 3) {
//         printf("\n");
//         return 0;
//     }

//     const char *str1 = argv[1];
//     const char *str2 = argv[2];

//     if (can_form_string(str1, str2)) 
// 		{
//         printf("%s\n", str1); // abcd
//     } else {
//         printf("\n");
//     }

//     return 0;
// }


// "mohamed" "joheamieidm"

// 5 = 5;