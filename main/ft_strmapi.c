/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:30:21 by liulm             #+#    #+#             */
/*   Updated: 2024/10/22 15:50:45 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*temp_str;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	temp_str = malloc (ft_strlen(s) + 1 * sizeof (char));
	if (temp_str == NULL)
		return (NULL);
	while (s[i])
	{
		temp_str[i] = f(i, s[i]);
		i++;
	}
	temp_str[i] = '\0';
	return (temp_str);
}

// #include <stdio.h>

// char	f(unsigned int i, char c)
// {
// 	i = 0;
// 	c = 'a';
// 	return (c);
// }

// int	main()
// {
// 	char	*result = ft_strmapi("Salut a tous", *f);
// 	printf("%s\n", result);
// 	free (result);
// 	return (0);
// }
