/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capture_arguments.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 23:33:04 by stcozaci          #+#    #+#             */
/*   Updated: 2025/06/22 23:33:41 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#define SIZE 5

//count if the char that the user are ok
int	ft_count_char(char *arg)
{
	int	len;

	len = 0;
	while (*arg)
	{
		len++;
		arg++;
	}
	if (len == ((2 * (SIZE * 4)) - 1))
		return (0);
	else
	{
		write (1, "Enter a valid number of digits", 30);
		return (1);
	}
}

//transform the char to numbers
int	*ft_char_to_numb(char *arg, int visuals [4][SIZE])
{
	/*int	*number;*/
	int	i;

	/*number = (int *) malloc(SIZE * SIZE * sizeof(int));*/
	i = 1;
	while (*arg)
	{
		if (*arg == ' ')
			arg++;
		else
		{
			visuals[i / SIZE][i % SIZE] = *arg - '0';
			i++;
			arg++;
		}
	}
	return (0);
}

//divide the nummbers in quarters for asign to col and row
int	*ft_div_numb(int *numbers, int quarter)
{
	int	*requested[SIZE + 1];
	int	j;
	int	i;

	j = (quarter - 1) * SIZE - (SIZE - 2);
	i = 1;
	while (i <= SIZE)
	{
		requested[i] = &numbers[j];
		i++;
		j++;
	}
	return (requested[SIZE]);
}

void	ft_print_box(int matrix[SIZE][SIZE]){
	int	i;
	int	j;
	char	digital;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			digital = matrix[i][j] + '0';
			write(1, &digital,1);
			write(1, " " , 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int ft_capture_arguments(int argc, char *argu[], int visuals[4][SIZE])
{
	if (argc == 2)
	{
		if (ft_count_char(argu[1]) != 0)
			return 1; 
		int *numbers = ft_char_to_numb(argu[1], visuals);
		if (numbers == NULL)
		{
			return 1; 
		}
		ft_print_box(visuals);
	}
	else
	{
		write(1, "Please provide the correct number of arguments.\n", 47);
	}

	return 0;
}

int main(int argc, char const *argv[])
{
	int	all_visuals[4][SIZE];
	char arguments[2];
	
	arguments = argv;
	ft_capture_arguments(argc, &arguments, all_visuals);
	ft_print_box(all_visuals);
}
