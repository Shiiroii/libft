/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:49:42 by liulm             #+#    #+#             */
/*   Updated: 2024/10/18 13:19:00 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	len_src;

	len = 0;
	len_src = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (src[len] && len < size - 1)
	{
		dst[len] = src[len];
		len++;
	}
	dst[len] = '\0';
	return (len_src);
}

// #include <stdio.h>

// int	main()
// {
// 	char *src = "Salut";
// 	char dst[50];

// 	printf("%zu\n", ft_strlcpy(dst, src, 6));
// 	printf("%s", dst);
// 	return (0);
// }
