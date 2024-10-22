/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:46:16 by liulm             #+#    #+#             */
/*   Updated: 2024/10/22 12:57:26 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main()
// {
// 	printf("%d", ft_isascii(5));
// 	printf("%d", ft_isascii('5'));
// 	printf("%d", ft_isascii(' '));
// 	return (0);
// }
