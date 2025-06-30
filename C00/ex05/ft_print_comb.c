/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:52:16 by stcozaci          #+#    #+#             */
/*   Updated: 2025/06/16 18:17:45 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_numbers(char num1, char num2, char num3)
{
	write (1, &num1, 1);
	write (1, &num2, 1);
	write (1, &num3, 1);
	if (!(num1 == '7' && num2 == '8' && num3 == '9'))
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	num1;
	char	num2;
	char	num3;

	num1 = '0';
	while (num1 <= '7')
	{
		num2 = num1 + 1;
		while (num2 <= '8')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				ft_numbers (num1, num2, num3);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
