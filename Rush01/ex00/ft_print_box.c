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
