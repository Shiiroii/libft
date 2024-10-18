/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:09:25 by liulm             #+#    #+#             */
/*   Updated: 2024/10/18 11:46:02 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_little;
	size_t	i;

	len_little = ft_strlen(little);
	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] && len_little <= len)
	{
		if ((ft_strncmp(big + i, little, len_little)))
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}

# include <string.h>
#include <stdio.h>

int	main()
{
	char	*ft;
	char	*example;

	ft = ft_strnstr("Salut", "Salut", 40);
	printf("ft_strnstr: %s\n", ft);
	printf("strnstr: %s\n", example);
	return(0);
}
