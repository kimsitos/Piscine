#include <stdio.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char s1[] = "estoy mal xd";
	char s2[] = "holaquetal";
	printf("%s", ft_strncat(s1, s2, 3));
	return 0;
}
