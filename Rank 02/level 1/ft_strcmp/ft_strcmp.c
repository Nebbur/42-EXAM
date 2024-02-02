int	ft_strcmp(char *s1, char *s2)
{
	int	i = -1;
	while (s1[++i] == s2[i])
		if (s1[i] == '\0')
			return (0);
	return (s1[i] - s2[i]);
}
