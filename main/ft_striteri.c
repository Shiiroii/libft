/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:51:47 by liulm             #+#    #+#             */
/*   Updated: 2024/10/29 15:11:06 by liulm            ###   ########.fr       */
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
// 	printf("%u %s", i, s);
// }

// int	main()
// {
// 	char	*str = "Salut";

// 	ft_striteri(str, &printouf);
// 	return (0);
// }
