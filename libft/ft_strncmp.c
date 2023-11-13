/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 05:22:17 by lionelulm         #+#    #+#             */
/*   Updated: 2023/11/13 05:53:32 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	chars1;
	unsigned char	chars2;
	size_t	i;

	chars1 = (unsigned char)s1[i];
	chars2 = (unsigned char)s2[i];
	i = 0;
	while ((s1[i] || s2[i]) && i < n )
	{
		if (s1[i] != s2[i])
		{
			return (chars1 - chars2);
		}
		i++;
	}
	return (0);
}
