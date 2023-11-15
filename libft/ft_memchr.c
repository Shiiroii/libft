/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:26:49 by lulm              #+#    #+#             */
/*   Updated: 2023/11/13 13:59:09 by lulm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			scan;
	unsigned int	i;

	scan = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (scan == (unsigned char *) c)
		{
			return (scan + i);
		}
		i++;
	}
	return (NULL);
}
