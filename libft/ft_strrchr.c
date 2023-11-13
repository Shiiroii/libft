/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:25:31 by lulm              #+#    #+#             */
/*   Updated: 2023/11/13 05:27:25 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			index;
	const char	*debut;

	debut = s;
	index = ft_strlen(s);
	s = s + index;
	while (*s != *debut && *s != c)
	{
		s--;
	}
	if (c == *s)
	{
		return ((char *)s);
	}
	return (0);
}
