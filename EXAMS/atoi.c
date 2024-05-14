#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10; //  12 * 10 = 120;
		result += str[i] - '0'; // 120 + 3 - 0 = 123;
		i++;
	}
	return (result * sign);
}

int main() {
  int a = ft_atoi("-123");
  printf("%d\n", a);
  return 0;
}