/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:26:49 by lulm              #+#    #+#             */
/*   Updated: 2023/11/07 16:50:10 by lulm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	scan;
	unsigned int	i;

	scan = (unsigned char *)s;
	while (i < n)
	{
		if(scan == (unsigned char *)c)
		{
			return (scan + i);
		}
		i++;
	}
	return (0);
}
