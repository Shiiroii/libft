/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:04:46 by lulm              #+#    #+#             */
/*   Updated: 2023/11/23 15:02:01 by lulm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*debut;
	char		chr;

	debut = s;
	i = ft_strlen(s);
	s = s + i;
	chr = (char) c;
	while (*s != *debut && *s != chr)
	{
		s--;
	}
	if (chr == *s)
	{
		return ((char *)s);
	}
	if (chr == '\0')
		return (NULL);
	return (NULL);
}
