/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logicals.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- < rjuarez-@student.42madrid.com   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 23:42:32 by rjuarez-          #+#    #+#             */
/*   Updated: 2025/06/21 23:42:39 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define SIZE 4
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3 

/*Cuando hay un 4 en alguna de las visuaizaciones, el contrario debe ser 1.*/
int	ft_logical_size_1(int visuals[4][SIZE], int location_1, int location_2)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (visuals[location_1][i] == SIZE)
			if (visuals[location_2][i] != 1)
				return (1);
		i++;
	}
	return (0);
}

/*Que en cada array de visualizaciones, solo puede haber un '4'*/
int	ft_only_size_for_visual(int visual[4][SIZE], int location)
{
	int	i;
	int	only_size;

	i = 0;
	only_size = 0;
	while (i < SIZE)
	{
		if (visual[location][i] == SIZE)
			only_size++;
		i++;
	}
	if (only_size > 1)
		return (1);
	else
		return (0);
}

/*TODO
verificar que en todas las visualizaciones son entre 1 y SIZE*/
int	ft_between_1_size(int visual[4][SIZE], int location)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if ((visual[location][i] < 1) && (visual[location][i] > SIZE))
			return (1);
		i++;
	}
	return (0);
}

/*Verifica las condiciones de los argumentos de numeros de visualizaciones*/
int	ft_logical_visuals(int *visuals[4][SIZE])//
{
	int	results;
	int	i;

	results = 0;
	i = 0;
	results = results + ft_logical_size_1(visuals, UP, DOWN);
	results = results + ft_logical_size_1(visuals, LEFT, RIGHT);
	while (i < 4)
	{
		results = results + ft_only_size_for_visual(visuals, i);
		results = results + ft_between_1_size(visuals, i);
		i++;
	}
	if (results == 0)
		return (0);
	else
		return (1);
}
