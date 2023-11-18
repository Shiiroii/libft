/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:04:41 by lulm              #+#    #+#             */
/*   Updated: 2023/11/18 17:02:19 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	chars1;
	unsigned char	chars2;
	size_t			i;

	i = 0;
	while (i < n && (s1[i] && s2[i]))
	{
		if (s1[i] != s2[i])
		{
			chars1 = (unsigned char)s1[i];
			chars2 = (unsigned char)s2[i];
			return (chars1 - chars2);
		}
		i++;
	}
	if (s1[i] != s2[i])
	{
		chars1 = (unsigned char)s1[i];
		chars2 = (unsigned char)s2[i];
		return (chars1 - chars2);
	}
	return (0);
}
