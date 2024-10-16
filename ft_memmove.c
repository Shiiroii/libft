/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:03:59 by liulm             #+#    #+#             */
/*   Updated: 2024/10/16 12:07:43 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	len;

	len = 0;
	unsigned char		*tempdest;
	const unsigned char	*tempsrc;
	if (dest == NULL && src == NULL)
		return (NULL);
}

#include <stdio.h>

int	main(void)
{
	char	*dest;
	char	*src = "Salut Salut"

	ft_memmove(dest, src, 5);
	printf("%s | %s\n", src, dest);
}
