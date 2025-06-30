/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 18:10:30 by stcozaci          #+#    #+#             */
/*   Updated: 2025/06/26 19:40:35 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	unsigned int	i;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
		j++;
	}
	i = 0;
	while (src[i] && i < nb)
	{
		dest[j + i] = src[i];
		i++;
	}
	while (i < nb)
	{
		dest[j + i] = '\0';
		i++;
	}
	return (dest);
}
