/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:35:53 by liulm             #+#    #+#             */
/*   Updated: 2024/10/17 15:41:08 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c);
{
	char	chr;
	char	*temp_str;
	int		len;

	chr = (char)c;
	temp_str = (char *)s;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (*(s + 1) == chr)
			return (str + len);
		len--;
	}
	return (NULL);
}

