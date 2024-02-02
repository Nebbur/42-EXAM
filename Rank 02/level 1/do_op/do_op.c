#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		int	res;
		int	a = atoi(av[1]);
		int	b = atoi(av[3]);
		if (av[2][0] == '+') res = a + b;
		if (av[2][0] == '-') res = a - b;
		if (av[2][0] == '*') res = a * b;
		if (av[2][0] == '/') res = a / b;
		if (av[2][0] == '%') res = a % b;
		printf("%d\n", res);
	}
	else
		write(1, "\n", 1);
	return (0);
}
