#include <unistd.h>

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	char c = n % 10 + '0';
	write(1, &c, 1);
}

int	is_prime(int n)
{
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int	n = 0;
	int	i = -1;

	while (str[++i] >= '0' && str[i] <= '9' && str[i])
		n = n * 10 + str[i] - '0';
	return (n);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int n = ft_atoi(av[1]);
		int sum = 0;
		for (int i = 2; i <= n; i++)
			if (is_prime(i))
				sum += i;
		ft_putnbr(sum);
	}
	else
		write (1, "0", 1);
	write (1, "\n", 1);
	return (0);
}
