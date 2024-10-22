/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:21:04 by liulm             #+#    #+#             */
/*   Updated: 2024/10/22 12:56:33 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include <stdio.h>
// #include <strings.h>

// int	main()
// {
// 	char	str[50] = "Salut comment ca va";
// 	char	str2[50] = "Salut comment ca va";

// 	printf("Avant: %s\n", str);
// 	ft_bzero(str, 1);
// 	printf("Apres: %s\n", str);
// 	printf("Avant: %s\n", str2);
// 	bzero(str2, 1);
// 	printf("Apres: %s", str2);
// 	return (0);
// }
