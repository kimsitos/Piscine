#include <stdio.h>

int     ft_strcmp(char *s1, char *s2);

int main()
{
	char *s1 = "hola";
	char *s2 = "hla";
	printf("%d", ft_strcmp(s1, s2));
	return 0;
}
