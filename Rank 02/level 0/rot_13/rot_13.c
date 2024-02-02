#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		char c;
		int i = -1;
		while (av[1][++i])
		{
			c = av[1][i];
			if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
				c += 13;
			else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
				c -= 13;
			write(1, &c, 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
