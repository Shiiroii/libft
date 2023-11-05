/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:04:16 by lulm              #+#    #+#             */
/*   Updated: 2023/11/05 13:04:47 by lulm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int					i;
	unsigned char		*pdest;
	const unsigned char	*psrc;


	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	i = 0;
	if (!dest || !src)
	{
		return (NULL);
	}
	if (pdest < psrc)
	{
		return (ft_memcpy(dest, src, n));
	}
	else
	{
		i = n;
		while (i > 0)
		{
			pdest[i - 1] = psrc[i - 1];
			i--;
		}
		return (dest);
	}
}

int	main(void)
{
	char	mem[] = "HELLOOO";
	char	*dest;
	char	*src;

	src = mem;
	dest = mem + 2;
	ft_memmove(dest, src, 5);
	printf("%s | %s\n", src, dest);
}
