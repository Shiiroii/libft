/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:57:59 by liulm             #+#    #+#             */
/*   Updated: 2024/10/23 17:29:35 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = 0;
	if (len_dst >= size)
		return (size + ft_strlen(src));
	while (src[len_src] && len_src < size - (len_dst) - 1)
	{
		dst[len_dst + len_src] = src[len_src];
		len_src++;
	}
	dst[len_dst + len_src] = '\0';
	return (len_dst + ft_strlen(src));
}

// #include <stdio.h>

// int	main()
// {
// 	const char	*src = "a tous";
// 	char	dst[20] = "Salut ";
// 	size_t	len;
// 	printf("Before : %s\n", dst);
// 	len = ft_strlcat(dst, src, 20);
// 	printf("After : %s\n", dst);
// 	printf("Length : %zu", len);
// 	return (0);
// }
