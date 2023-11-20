/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:14:26 by lulm              #+#    #+#             */
/*   Updated: 2023/11/20 13:08:54 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	length(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		i += 1;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t		nbr;
	int			len;
	char		*str;

	nbr = n;
	len = length(nbr);
	str = (char *)malloc(sizeof(char) * (length(nbr) + 1));
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		str[len--] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (str);
}

int main(void)
{
    int test_values[] = {0, 123, -456, -2147483648, 2147483647, -2147483647};

    for (int i = 0; i < sizeof(test_values) / sizeof(test_values[0]); i++)
    {
        int n = test_values[i];
        char *result = ft_itoa(n);

        if (result != NULL)
        {
            printf("Input: %d, Result: %s\n", n, result);
            free(result);
        }
        else
        {
            printf("Memory allocation error for input: %d\n", n);
        }
    }

    return 0;
}
