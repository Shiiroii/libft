/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:08:52 by lulm              #+#    #+#             */
/*   Updated: 2023/11/13 13:57:52 by lulm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0 || ft_strlen(big) > ft_strlen(little))
	{
		return (0);
	}
	if (little[i] == '\0' || big == little)
	{
		return ((char *) big);
	}
	while (i < len)
	{
		if (ft_strncmp(big + i, little, ft_strlen(little)))
		{
			return
		}
		i++;
	}
	return (0);
}
