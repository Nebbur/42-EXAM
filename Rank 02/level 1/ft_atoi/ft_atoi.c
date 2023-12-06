int	ft_atoi(const char *str)
{
    int s;
    int r = 0;
    while (*str <= 32)
        str++;
    s = (*str == '-') ? -1 : 1;
    (*str == '-' || *str == '+') ? str++ : 0;
    while (*str && *str <= '9' && *str >= '0')
    {
        r = r * 10 + (*str - '0');
        str++;
    }
    return (r * s);
}
