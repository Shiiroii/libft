/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 04:22:56 by lionelulm         #+#    #+#             */
/*   Updated: 2023/11/15 05:51:09 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*end;

	end = (char *)malloc((sizeof(char) * i) + 1);
	if (!s)
		return (NULL);
	if (len == 0 || ft_strlen(s) == 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (end == 0)
		return (0);
	i = 0;
	while (i < len && s[i + start])
	{
		end[i] = s[i + start];
		i++;
	}
	end[i] = '\0';
	return (end);
}

