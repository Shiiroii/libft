/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:41:51 by liulm             #+#    #+#             */
/*   Updated: 2024/10/16 12:08:58 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	len;
	char		*tempdest;
	const char	*tempsrc;

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


#include <stdio.h>

int main()
{
	char *src = "Coucou toi";
	char dest[20];

	ft_memcpy(dest, src, 3);
	printf("Source: %s\n", src);
	printf("Dest: %s\n", dest);
	return (0);
}
