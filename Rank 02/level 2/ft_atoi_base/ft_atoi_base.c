int    isbase(char c, int str_base)
{
    char base[17] = "0123456789abcdef";
    char baseM[17] = "0123456789ABCDEF";
    while (str_base--)
        if (base[str_base] == c || baseM[str_base] == c)
            return (1);
    return (0);
}

int     aux(char c, int str_base)
{
    if (c <= '9' && c >= '0')
        return (c - '0');
    else if (c <= 'f' && c >= 'a')
        return (c - 'a' + 10);
    else if (c <= 'F' && c >= 'A')
        return (c - 'A' + 10);
}
#include <stdio.h>
int	ft_atoi_base(const char *str, int str_base)
{
    while (*str <= 32)
        str++;
    int s = (*str == '-') ? -1 : 1;
    (*str == '-' || *str == '+') ? str++ : 0;
    int r = 0;
    while (isbase(*str, str_base) == 1)
        r = r * str_base + aux(*str++, str_base);
    return (r *s);
}
