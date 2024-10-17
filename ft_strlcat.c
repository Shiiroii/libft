/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:57:59 by liulm             #+#    #+#             */
/*   Updated: 2024/10/17 15:07:58 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = 0;
	if (size == 0 || len_dst >= size)
		return (size + ft_strlen(src));
	while (src[lensrc] && len_dst + len_src < size - 1)
	{
		dst[len_dst + len_src] = src[len_src];
		len_src++;
	}
	dst[len_dst + len_src] = '\0';
	return (len_dst + len_src);
}
