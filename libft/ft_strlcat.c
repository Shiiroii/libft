/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:04:28 by lulm              #+#    #+#             */
/*   Updated: 2023/11/18 15:49:53 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	i;

	lendst = ft_strlen(dst);
	i = 0;
	if (lendst >= size)
	{
		return (size + ft_strlen(src));
	}
	while (src[i] != '\0' && lendst + i < size)
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[i + lendst] = '\0';
	return (lendst + ft_strlen(src));
}
