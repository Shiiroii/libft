/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:17:03 by liulm             #+#    #+#             */
/*   Updated: 2024/10/17 15:34:59 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	chr;

	chr = (char)c;
	if (chr == '\0')
		return ((char *)s);
	while (*s)
	{
		if (*s == chr)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	char	*str = "Salut";
// 	char	c = 'a';

// 	printf("%s\n", ft_strchr(str, c));
// 	printf("%s", strchr(str, c));
// 	return (0);
// }
