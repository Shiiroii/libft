/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:25:31 by lulm              #+#    #+#             */
/*   Updated: 2023/11/05 16:15:41 by lulm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	const char	*debut;

	debut = s;
	i = ft_strlen(s);
	s = s + i;
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
