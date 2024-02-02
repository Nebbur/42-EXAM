#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	i = 2;

	if (ac == 2)
	{
		int	nb = atoi(av[1]);
		if (nb == 1)
			printf("1");
		while (nb > 1)
		{
			if (nb % i == 0)
			{
				printf("%d", i);
				nb /= i;
				if (nb > 1)
					printf("*");
				i = 1;
			}
			i++;
		}
	}
	printf("\n");
	return (0);
}
