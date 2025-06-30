/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:36:05 by stcozaci          #+#    #+#             */
/*   Updated: 2025/06/26 17:03:30 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_alphanumeric(char str)
{
	if ((str < '0' || str > '9')
		&& (str < 'a' || str > 'z')
		&& (str < 'A' || str > 'Z'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_alphanumeric(str[i - 1])
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if (ft_alphanumeric(str[i - 1])
			&& (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}
