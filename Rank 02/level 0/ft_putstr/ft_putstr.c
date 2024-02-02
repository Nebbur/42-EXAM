#include <unistd.h>

void	ft_putstr(char *str)
{
	for(int i = -1; str[++i];)
		write(1, &str[i], 1);
}
