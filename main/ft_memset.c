/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:33:56 by liulm             #+#    #+#             */
/*   Updated: 2024/10/22 12:54:58 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	size;
	char	*temp;

	size = 0;
	temp = s;
	while (size < n)
	{
		*temp = c;
		temp++;
		size++;
	}
	return (s);
}

// #include <stdio.h>

// int	main()
// {
// 	char	str[50] = "Salut comment ca va";
// 	char	str2[50] = "Salut comment ca va";

// 	printf("Avant: %s\n", str);
// 	ft_memset(str, 'o', 7);
// 	printf("Apres: %s\n", str);
// 	printf("Avant: %s\n", str2);
// 	memset(str2, 'o', 7);
// 	printf("Apres: %s", str2);
// 	return (0);
// }
