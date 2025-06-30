#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 13;
	b = 67;
	ft_swap(&a, &b);
	return (0);
}
