/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:39:47 by liulm             #+#    #+#             */
/*   Updated: 2024/10/21 13:54:04 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;

	str = (char *)malloc((sizeof(char) * ft_strlen(s)) + 1);
	i = 0;
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>

// int	main()
// {
// 	char	*str = "Salut";
// 	char	*cpy = ft_strdup(str);

// 	printf("%s\n", cpy);
// 	free (cpy);
// 	return (0);
// }
