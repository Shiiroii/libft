/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:35:53 by liulm             #+#    #+#             */
/*   Updated: 2024/10/18 13:19:42 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	chr;
	char	*temp_str;
	int		len;

	chr = (char)c;
	temp_str = (char *)s;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (*(s + len) == chr)
			return (temp_str + len);
		len--;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	char	*str = "Coucou";
// 	char	c = 'o';

// 	printf("ft_strrchr : %s\n", ft_strrchr(str, c));
// 	printf("strrchr : %s", strrchr(str, c));
// 	return (0);
// }
