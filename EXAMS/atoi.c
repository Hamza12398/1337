#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// int		ft_atoi(const char *str)
// {
// 	int i;
// 	int sign;
// 	int result;

// 	i = 0;
// 	sign = 1;
// 	result = 0;
// 	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
// 		i++;
// 	if (str[i] == '-')
// 	{
// 		sign *= -1;
// 		i++;
// 	}
// 	else if (str[i] == '+')
// 		i++;
// 	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
// 	{
// 		result *= 10; //  12 * 10 = 120;
// 		result += str[i] - '0'; // 120 + 3 - 0 = 123;
// 		i++;
// 	}
// 	return (result * sign);
// }

// int main() {
//   int a = ft_atoi("-++-123");
//   printf("%d\n", a);
//   return 0;
// }


#include <stdio.h>

int ft_atoi(const char *str) {
    int sign = 1;
    int result = 0;
    int i = 0;

    // Ignore leading whitespaces
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;

    // Handle sign
    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    // Convert string to integer
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result * sign;
}

int main() {
    const char *str = "    --12345";
    printf("%d\n", ft_atoi(str));
    return 0;
}
