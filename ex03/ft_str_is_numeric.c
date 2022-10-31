int		ft_str_is_numeric(char *str)
{
	int		i;
	int		res;
	char	c;

	i = 0;
	res = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c < 48 || c > 57)
		{
			res = 0;
		}
		i++;
	}
	return (res);
}
