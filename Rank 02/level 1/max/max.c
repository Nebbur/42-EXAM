int		max(int* tab, unsigned int len)
{
    int r = 0;
    for(int i = 0; tab[i]; i++)
        if (tab[i] > r)
            r = tab[i];
    return (r);
}