#include <stdio.h>
#include <stdlib.h>


// int ft_strlen(char *str) 
// {
//   int i = 0;
//   while (str[i]!= '\0')
//   {
//     i++;
//   }
//   return i;
// }

// char    *ft_strrev(char *str)
// {
//   int i = 0;
//   int j = ft_strlen(str) - 1;
//   char tmp;
//   while (i < j)
//   {
//     tmp = str[i];
//     str[i] = str[j];
//     str[j] = tmp;
//     i++;
//     j--;
//   }
//   return str;
// }

// int main(void)
// {
//   char str[] = "Hello hamza";
//   printf("%s\n", ft_strrev(str));
//   return 0;
// }


char *ft_strrev1(char *str)
{
	int i = -1;
	int length = 0;
	char temporary;

	while (str[length])
		length++;
	while (i++ < length / 2)
	{
		temporary = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temporary;
	}
	return (str);
}

int main(void)
{
  char str[] = "Hello hamza";
  printf("%s\n", ft_strrev1(str));
  return 0;
}