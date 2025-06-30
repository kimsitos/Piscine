/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:44:34 by stcozaci          #+#    #+#             */
/*   Updated: 2025/06/26 18:06:28 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
        unsigned int     i;

        i = 0;
        while ((s1[i] || s2[i]) && i < n)
        {
                if (s1[i] != s2[i])
                        return (s1[i] - s2[i]);
                i++;
        }
        return (0);
}

