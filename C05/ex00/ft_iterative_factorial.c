int	ft_iterative_factorial(int nb)
{
	int	num_factorial;

	num_factorial = 1;
	if (nb > 0)
	{
		while (nb > 1)
		{
			num_factorial = num_factorial * nb;
			nb--;
		}
		return (num_factorial);
	}
	return (0);
}
