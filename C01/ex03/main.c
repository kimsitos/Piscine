#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int div;
	int mod;
	ft_div_mod(-10, -2, &div, &mod);

        printf("%d\n", div);
        printf("%d\n", mod);

	return 0;
}
