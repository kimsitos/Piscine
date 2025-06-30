#include <stdio.h>

char    *ft_strcat(char *dest, char *src);

int main()
{
	char s1[] = "h";
	char s2[] = "hol";
	printf("%s", ft_strcat(s1, s2));
	return 0;
}
