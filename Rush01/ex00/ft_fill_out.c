/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_out.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangarci dangarci@student.42madrid.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 19:43:07 by dangarci          #+#    #+#             */
/*   Updated: 2025/06/22 19:43:15 by dangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#define SIZE 4
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

int	ft_check(int *box_table[SIZE], int *visuals[4][SIZE]);
void	ft_print_box(int *matrix[SIZE][SIZE]){
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
//borrar

	// Inicializar matriz en ceros
	/*while (i < filas)
	{
		j = 0;
		while (j < columnas)
		{
			matriz[i][j] = 0;
			j++;
		}
		i++;
	}*/

// Dummy de validación — reemplaza con la lógica real
int ft_fill_out(int *box_table[SIZE][SIZE], int *visuals[4][SIZE])
{
	int	i;
	int	j;
	int	valor;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			valor = 1;
			while (valor <= SIZE)
			{
				if (0 == ft_check(*box_table, visuals))
				{
					ft_print_box(*box_table);
					return 0;
				}
				valor++;
			}
			j++;
		}
		i++;
	}

	return 1;
}

/*int main() {
    int test[SIZE][SIZE] /*= {
        {1, 2, 3, 4},
        {2, 3, 4, 1},
        {3, 4, 1, 2},
        {4, 1, 2, 3}}*/;
/*	int all_visuals[4][SIZE];

	all_visuals[UP][0] = 4; all_visuals[UP][1] = 3; all_visuals[UP][2] = 2; all_visuals[UP][3] = 1;
    all_visuals[DOWN][0] = 1; all_visuals[DOWN][1] = 2; all_visuals[DOWN][2] = 2; all_visuals[DOWN][3] = 2;
    all_visuals[LEFT][0] = 4; all_visuals[LEFT][1] = 3; all_visuals[LEFT][2] = 2; all_visuals[LEFT][3] = 1;
    all_visuals[RIGHT][0] = 1; all_visuals[RIGHT][1] = 2; all_visuals[RIGHT][2] = 2; all_visuals[RIGHT][3] = 2;
/*	if (0 == ft_logical_visuals(all_visuals))
        printf("Test OK\n");
    else
        printf("Test KO\n");*/

/*	if (0 == ft_check(test, all_visuals))
        printf("Test OK\n");
    else
        printf("Test KO\n");*/
	
/*	if(0 == ft_fill_out(test, all_visuals))
		printf("Test OK\n");
    else
        printf("Test KO\n"); 
}*/