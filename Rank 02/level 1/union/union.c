#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int	i = -1;
		int	ascii[255] = {0};
		for (int i = 0; av[++i];)
		{
			int	j = -1;
			while (av[i][++j])
			{
				if (!ascii[(int)av[i][j]])
				{
					ascii[(int)av[i][j]] = 1;
					write(1, &av[i][j], 1);
				}
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
