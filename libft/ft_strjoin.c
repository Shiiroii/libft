/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:01:21 by lionelulm         #+#    #+#             */
/*   Updated: 2023/11/18 15:00:42 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1l;
	size_t	s2l;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	s1l = 0;
	s2l = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	while (s1[s1l])
	{
		str[s1l] = s1[s1l];
		s1l++;
	}
	while (s2[s2l])
	{
		str[s1l] = s2[s2l];
		s1l++;
		s2l++;
	}
	str[s1l] = '\0';
	return (str);
}
