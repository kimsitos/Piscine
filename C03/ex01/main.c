#include <stdio.h>

int     ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char *s1 = "h";
	char *s2 = "hol";
	printf("%d", ft_strncmp(s1, s2, 2));
	return 0;
}
