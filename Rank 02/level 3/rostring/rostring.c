#include <unistd.h>
int main (int ac, char **av)
{
    char *temp = av[1];
    int trig = 0;
    while (*av[1] && *av[1] <= 32)
        av[1]++;
    while (*av[1] && *av[1] > 32)
        av[1]++;
    while (*av[1] && *av[1] <= 32)
        av[1]++;
    while (*av[1])
    {
        if (!(*av[1] <= 32 && *(av[1] - 1) <= 32))
            write (1, *&av[1], 1);
        trig = 1;
        av[1]++;
    }

    if (trig == 1 && *(av[1] - 1) > 32)
        write (1, " ", 1);
    while (*temp && *temp <= 32)
        temp++;
    while (*temp && *temp > 32)
        write (1, temp++, 1);

    write (1, "\n", 1);
}