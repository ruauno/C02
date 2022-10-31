int		ft_str_is_lowercase(char *str)
{
	int		i;
	int		res;
	char	c;

	i = 0;
	res = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c < 97 || c > 122)
		{
			res = 0;
		}
		i++;
	}
	return (res);
}
