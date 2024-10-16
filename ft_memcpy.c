/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:41:51 by liulm             #+#    #+#             */
/*   Updated: 2024/10/16 12:12:31 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	len;
	unsigned char		*tempdest;
	const unsigned char	*tempsrc;

	len = 0;
	tempdest = (char *)dest;
	tempsrc = (const char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (len < n)
	{
		tempdest[len] = tempsrc[len];
		len++;
	}
	return (dest);
}
