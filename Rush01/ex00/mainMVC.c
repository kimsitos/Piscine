/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logicals.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 16:10:05 by stcozaci          #+#    #+#             */
/*   Updated: 2025/06/21 19:22:23 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define SIZE 4
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGTH 3 

void	ft_print_box_table(int matrix[SIZE][SIZE]);

int		ft_capture_arguments(int argc, char const argv[], int all_visuals[][]);

int		ft_logical_visuals(int visuals[]);

int		ft_fill_out(int matrix[SIZE][SIZE], int all_visuals[]);

int	main(int argc, char const *argv[])
{
	int	box_table[SIZE][SIZE];
	int	all_visuals[4][SIZE];
	int	i;

	if (1 == ft_capture_arguments(argc, argv, all_visuals))
		return (1);
	if (1 == ft_logical_visuals(all_visuals))
		return (1);
	if (1 == ft_fill_out(box_table, all_visuals))
		return (1);
	ft_print_box_table(box_table);
	return (0);
}
