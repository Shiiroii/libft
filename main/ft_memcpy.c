/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:41:51 by liulm             #+#    #+#             */
/*   Updated: 2024/10/28 12:48:10 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				len;
	unsigned char		*tempdest;
	const unsigned char	*tempsrc;

	len = 0;
	tempdest = (unsigned char *)dest;
	tempsrc = (const unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (len < n)
	{
		tempdest[len] = tempsrc[len];
		len++;
	}
	return (dest);
}

// #include <stdio.h>

// int main()
// {
// 	const char *src = "Coucou toi";
// 	char dest[20];

// 	ft_memcpy(dest, src, 3);
// 	printf("Source: %s\n", src);
// 	printf("Dest: %s\n", dest);
// 	return (0);
// }
