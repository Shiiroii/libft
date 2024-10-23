/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:51:47 by liulm             #+#    #+#             */
/*   Updated: 2024/10/23 14:13:11 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

// #include <stdio.h>

// void	printouf(unsigned int i, char *s)
// {
// 	printf("index: %d, string: %c\n", i, *s);
// }

// int	main()
// {
// 	char	*str = "";
// 	printf("debut: %s\n", str);
// 	ft_striteri(str, &printouf);
// 	return (0);
// }
