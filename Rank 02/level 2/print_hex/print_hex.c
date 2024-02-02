#include <unistd.h>

int	ft_atoi(char *s)
{
	int	n = 0;
	while (*s)
		n = n * 10 + *s++ - '0';
	return (n);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		char	hex[16] = "0123456789abcdef";
		char	res[8];
		int	n = ft_atoi(av[1]);
		int	i = -1;

		while (n)
		{
			res[++i] = hex[n % 16];
			n /= 16;
		}
		while (i >= 0)
			write(1, &res[i--], 1);
	}
	write(1, "\n", 1);
	return (0);
}
