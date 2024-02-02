#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int	i = -1;
		int ascii[256] = {0};
		while (av[1][++i])
		{
			int j = -1;
			while (av[2][++j])
			{
				if (ascii[(int)av[1][i]] == 0)
					ascii[(int)av[1][i]] = 1;
				if (av[2][j] == av[1][i] && ascii[(int)av[1][i]] == 1)
				{
					ascii[(int)av[2][j]] = 2;
					write (1, &av[2][j], 1);
				}
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}
