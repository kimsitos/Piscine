#include <stdio.h>
void    ft_ultimate_ft (int *********nbr);

int main()
{
	int i;
	int *num1;
	int **num2;
	int ***num3;
	int ****num4;
	int *****num5;
	int ******num6;
	int *******num7;
	int ********num8;
	int *********num9;

	num1 = &i;
	num2 = &num1;
	num3 = &num2;
	num4 = &num3;
	num5 = &num4;
	num6 = &num5;
	num7 = &num6;
	num8 = &num7;
	num9 =  &num8;

	ft_ultimate_ft (num9);
	printf ("%d\n", i);
}
