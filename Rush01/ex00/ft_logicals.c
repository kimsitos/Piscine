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
#define RIGTH 3 

/*Cuando hay un 4 en alguna de las visuaizaciones, el contrario debe ser 1.*/
int	ft_logical_4_1(int visual_1[], int visual_2[])
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (visual_1[i] == SIZE)
			if (visual_2[i] != 1)
				return (1);
		i++;
	}
	return (0);
}

/*Que en cada array de visualizaciones, solo puede haber un '4'*/
int	ft_only_4_for_visual(int visual[])
{
	int	i;
	int	only_size;

	i = 0;
	only_size = 0;
	while (i < SIZE)
	{
		if (visual[i] == SIZE)
			only_size++;
		i++;
	}
	if (only_size > 1)
		return (1);
	else
		return (0);
}

/*Verifica las condiciones de los argumentos de numeros de visualizaciones*/
int	ft_logical_visuals(int up[], int down[], int left[], int rigth[])
{
	int	results;

	results = 0;
	results = results + ft_logical_4_1(up, down);
	results = results + ft_logical_4_1(left, rigth);
	results = results + ft_only_4_for_visual(up);
	results = results + ft_only_4_for_visual(down);
	results = results + ft_only_4_for_visual(left);
	results = results + ft_only_4_for_visual(rigth);
	if (results == 0)
		return (0);
	else
		return (1);
}
