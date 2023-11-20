/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:14:26 by lulm              #+#    #+#             */
/*   Updated: 2023/11/20 11:51:13 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	length(size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	else if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		n++;
	}
	return (i);
}

char	*ft_itoa(int n);
{
	size_t		nbr;
	int			i;
	char		*str;


	nbr = n;
	i = length(nbr);
	str = (char *)malloc(sizeof(char) * (length(n)));
	if (str == NULL)
		return (NULL);
	str[0] = '0';
	if (n < 0)
	{
		if (n == -2147483648)
			ft_memmove(str, "-2147483648", 11);
		str[0] = '-';

	}
}
