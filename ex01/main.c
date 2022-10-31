#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char	dest[] = "                                   ";
	char	*src;
	int		size;

	size = 30;
	src = "test, buongiorno a tutti";
//	printf(".%s.\n\n", ft_strncpy(dest, src, size));
	printf(".%s.\n\n", strncpy(dest, src, size));
}
