/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:08:52 by lulm              #+#    #+#             */
/*   Updated: 2023/11/14 16:15:58 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*bigc;
	size_t	i;

	bigc = (char *) big;
	i = 0;
	if (len == 0)
	{
		return (NULL);
	}
	if (*little == '\0')
	{
		return (bigc);
	}
	while (big[i] != '\0' && i < len)
	{
		if ((ft_strncmp(big + i, little, ft_strlen(little))) == 0)
		{
			return (bigc + i);
		}
		i++;
	}
	return (NULL);
}
