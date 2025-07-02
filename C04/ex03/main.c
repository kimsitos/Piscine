int	ft_atoi(char *str);

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *s = "-+++-+---3rtdfdb";;

	printf("atoi muestra:                  %d\n", atoi(s));
	printf("ft_atoi funcion muestra:       %d", ft_atoi(s));
	return (0);
}
