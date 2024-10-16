/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:16:39 by liulm             #+#    #+#             */
/*   Updated: 2024/10/16 14:54:29 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	else
		return (0);
}

// int	main()
// {
// 	printf("%d", ft_isalnum(26));
// 	printf("%d", ft_isalnum('5'));
// 	printf("%d", ft_isalnum(' '));
// 	return (0);
// }
