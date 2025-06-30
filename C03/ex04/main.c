#include <string.h>
#include <stdio.h>

char *ft_strstr(char *dest, char *to_find);


int	main(void)
{
	char i[70] = "A$aP";
	char m[70] = "s";
	char *str1 = strstr(i, m);
	char *str2 = ft_strstr(i, m);
	printf("La funcion deberia de introducir: %s\n", str1);
	printf("Nuestra funcion da:               %s\n", str2);
	return 0;
}
