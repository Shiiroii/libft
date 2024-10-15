/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:01:56 by liulm             #+#    #+#             */
/*   Updated: 2024/10/15 14:17:44 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	while (str[len])
	{
		len++;
	}
	return (len);
}

// int	main()
// {
// 	printf("%zu", ft_strlen("Salut"));
// 	return (0);
// }
