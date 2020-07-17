#include <stdio.h>
#include <unistd.h>

char     *ft_strrev(char *str)
{
	char  tmp;
	int        i;
	int        a;

	i = 0;
	a = a;
	while (str[a] != '\0')
	{
		a++;
	}
	a--;
	while (a >= i)
	{
		tmp = str[i];
		str[i] = str[a];
		str[a] = tmp;
		i++;
		a--;
	}
	return (str);
}



