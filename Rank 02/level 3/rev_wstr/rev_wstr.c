#include <unistd.h>
#include <stdlib.h>

int     ft_str_len(char *str)
{
    int i = -1;
    while (str[++i])
        ;
    return (i);
}

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    rev_wstr(char *str)
{
    char *new_str;
    int i = ft_str_len(str);
    int trig = 0;
    new_str = NULL;
    while (str[--i])
    {
        if (str[i] == ' ' || i - 1 < 0)
        {
            if (new_str != NULL && i == 0 && *new_str == ' ')
                ft_putchar(' ');
            new_str = str + i;
            if (trig == 0 && *new_str == ' ')
            {
                new_str++;
                trig = 1;
            }
            while (*new_str)
            {
                ft_putchar(*new_str++);
                if (*new_str == ' ')
                    break;
            }
        }
    }
}

int main(int ac, char **ag)
{
    if (ac == 2)
    {
        rev_wstr(ag[1]);
    }
    ft_putchar('\n');
    return (0);
}