/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:48:02 by liulm             #+#    #+#             */
/*   Updated: 2024/10/18 13:20:13 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while ((nptr[i] == 32) || (nptr[i] >= 9 && (nptr[i] <= 13)))
		i++;
	if ((nptr[i] == '-') || (nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		result *= 10;
		result += nptr[i] - '0';
		i++;
	}
	return (result * sign);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	printf("ft_atoi :\n");
// 	printf("%d\n", ft_atoi("42"));
// 	printf("%d\n", ft_atoi("-42"));
// 	printf("%d\n", ft_atoi("1234a56"));
// 	printf("%d\n", ft_atoi("--+-123"));
// 	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
// 	printf("\natoi :\n");
// 	printf("%d\n", atoi("42"));
// 	printf("%d\n", atoi("-42"));
// 	printf("%d\n", atoi("1234a56"));
// 	printf("%d\n", atoi("--+-123"));
// 	printf("%d\n", atoi(" ---+--+1234ab567"));
// 	return (0);
// }
