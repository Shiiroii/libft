/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:09:48 by lulm              #+#    #+#             */
/*   Updated: 2023/11/20 16:11:37 by lulm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	resultat;
	int	i;
	int	u;

	resultat = 0;
	u = 0;
	i = 1;
	while ((nptr[u] == 32) || (nptr[u] >= 9 && nptr[u] <= 13))
	{
		u++;
	}
	while ((nptr[u] == '-') || (nptr[u] == '+'))
	{
		if (nptr[u] == '-')
			i *= -1;
		u++;
	}
	while (nptr[u] && nptr[u] >= '0' && nptr[u] <= '9')
	{
		resultat *= 10;
		resultat += nptr[u] - '0';
		u++;
	}
	resultat *= i;
	return (resultat);
}
