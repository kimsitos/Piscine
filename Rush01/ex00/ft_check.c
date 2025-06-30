/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- < rjuarez-@student.42madrid.com   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 20:15:53 by rjuarez-          #+#    #+#             */
/*   Updated: 2025/06/21 20:16:52 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define SIZE 4
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

/* cuenta las cajas que son visibles*/
int	ft_number_visible_boxes(int pos[])
{
	int	visible;
	int	max_height;
	int	i;

	visible = 1;
	max_height = pos[0];
	i = 1;
	while (i < SIZE)
	{
		if (pos[i] > max_height)
		{
			visible++;
			max_height = pos[i];
		}
		i++;
	}
	return (visible);
}

/*cuenta las cajas visibles inversa*/
int	ft_number_visible_boxes_reverse(int pos[])
{
	int	visible;
	int	max_height;
	int	i;

	visible = 1;
	max_height = pos[SIZE - 1];
	i = SIZE - 2;
	while (i >= 0)
	{
		if (pos[i] > max_height)
		{
			visible++;
			max_height = pos[i];
		}
		i--;
	}
	return (visible);
}
/*Comprueba si las filas tienen las  visualizaciones correctas tanto a derecha*/
/*como a izquierda*/

int	ft_check_rows(int box_table[SIZE][SIZE], int visuals[4][SIZE]) //
{
	int	i;
	int	j;
	int	row_check[SIZE];

	i = 0;
	while ((i < SIZE))
	{
		j = 0;
		while (j < SIZE)
		{
			row_check[j] = box_table[i][j];
			j++;
		}
		if (visuals[LEFT][i] != ft_number_visible_boxes(row_check))
			return (1);
		if (visuals[RIGHT][i] != ft_number_visible_boxes_reverse(row_check))
			return (1);
		i++;
	}
	return (0);
}
/*Comprueba si las columnas tienen las visualizaciones correctas tanto a */
/*arriba, como a abajo*/

int	ft_check_columns(int box_table[SIZE][SIZE], int visuals[4][SIZE])
{
	int	i;
	int	j;
	int	colm_check[SIZE];

	i = 0;
	while ((i < SIZE))
	{
		j = 0;
		while (j < SIZE)
		{
			colm_check[j] = box_table[j][i];
			j++;
		}
		if (visuals[UP][i] != ft_number_visible_boxes(colm_check))
			return (1);
		if (visuals[DOWN][i] != ft_number_visible_boxes_reverse(colm_check))
			return (1);
		i++;
	}
	return (0);
}

int	ft_check(int *box_table[SIZE], int *visuals[4][SIZE])
{
	if (0 != ft_check_rows(box_table, visuals))
		return (1);
	if (0 != ft_check_columns(box_table, visuals))
		return (1);
	return (0);
}
