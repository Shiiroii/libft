/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 04:22:56 by lionelulm         #+#    #+#             */
/*   Updated: 2023/11/20 16:06:31 by lulm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*end;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	end = (char *)malloc(sizeof(char) * (len + 1));
	if (!end)
		return (NULL);
	while (i < len && s[i + start])
	{
		end[i] = s[i + start];
		i++;
	}
	end[i] = '\0';
	return (end);
}
