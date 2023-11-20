/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:08:52 by lulm              #+#    #+#             */
/*   Updated: 2023/11/20 16:02:01 by lulm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*bigc;
	size_t	i;
	size_t	little_len;

	bigc = (char *) big;
	i = 0;
	little_len = ft_strlen(little);
	if (len == 0)
	{
		return (NULL);
	}
	if (*little == '\0')
	{
		return (bigc);
	}
	while (big[i] && i < len)
	{
		if ((ft_strncmp(big + i, little, little_len)) == 0)
		{
			return (bigc + i);
		}
		i++;
	}
	return (NULL);
}
