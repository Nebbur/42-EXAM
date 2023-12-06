unsigned int    lcm(unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0)
        return (0);
    for(int i = 1; 1; i++)
        if (i % a == 0 && i % b == 0)
            return (i);
}