#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac <= 1)
		return (write(1, "\n", 1));
	for (int i = 0; av[++i];)
	{
		for (int j = -1; av[i][++j];)
		{
			if (av[i][j] >= 'a' && av[i][j] <= 'z')
				if (av[i][j + 1] <= 32)
					av[i][j] -= 32;
			if (av[i][j] >= 'A' && av[i][j] <= 'Z' && av[i][j + 1] > 32)
				av[i][j] += 32;
			write(1, &av[i][j], 1);
		}
		write(1, "\n", 1);
	}
	return (0);
}
