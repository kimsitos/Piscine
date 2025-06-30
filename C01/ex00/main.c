#include <stdio.h>
void	ft_ft(int *nbr);

int main()
{
	int a;

	a =  12;
	printf ("%d\n", a);
	ft_ft(&a);
	printf ("%d\n", a);
	return 0;
}
