/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 08:51:11 by stcozaci          #+#    #+#             */
/*   Updated: 2025/06/27 12:46:55 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *dest, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!to_find[0])
		return (dest);
	while (dest[i])
	{
		j = 0;
		while (to_find[j] && dest[i + j] == to_find[j])
			j++;
		if (!to_find[j])
			return (&dest[i]);
		i++;
	}
	return (0);
}
