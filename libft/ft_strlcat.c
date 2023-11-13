/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 01:48:29 by lionelulm         #+#    #+#             */
/*   Updated: 2023/11/13 05:48:57 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	index;

	lendst = ft_strlen(dst);
	index = 0;
	if (lendst >= size)
	{
		return (size + ft_strlen(src));
	}
	while (src[index] != '\0' && lendst + index < size - 1)
	{
		dst[lendst + index] = src[index];
		index++;
	}
	dst[index + lendst] = '\0';
	return (lendst + ft_strlen(src));
}
