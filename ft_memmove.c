/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:03:59 by liulm             #+#    #+#             */
/*   Updated: 2024/10/16 14:57:09 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				len;
	unsigned char		*tempdest;
	const unsigned char	*tempsrc;

	len = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	tempdest = (unsigned char *)dest;
	tempsrc = (const unsigned char *)src;
	if (tempdest < tempsrc)
		return (ft_memcpy(dest, src, n));
	else
	{
		while (len < n)
		{
			tempdest[len] = tempsrc[len];
			len++;
		}
	}
	return (dest);
}
