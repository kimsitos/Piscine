#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int a;
	int b;

	a = 10;
	b = 3;
	
	printf("%d\n", a);
        printf("%d\n", b);

	ft_ultimate_div_mod(&a, &b);

        printf("%d\n", a);
        printf("%d\n", b);

	return 0;
}
