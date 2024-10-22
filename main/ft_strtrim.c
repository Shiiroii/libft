/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:10:40 by liulm             #+#    #+#             */
/*   Updated: 2024/10/22 12:48:42 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	chars_to_find(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (0);
		i++;
	}
	return (1);
}

unsigned int	start_of_str(char *s1, char *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (chars_to_find(s1[i], set) == 1)
			break ;
		i++;
	}
	return (i);
}

unsigned int	end_of_str(char *s1, char *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (i > 0)
	{
		if (chars_to_find(s1[i], set) == 1)
			break ;
		i--;
	}
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*set_str;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	str = (char *)s1;
	set_str = (char *)set;
	start = start_of_str(str, set_str);
	end = end_of_str(str, set_str) - start;
	return (ft_substr(str, start, end));
}

// #include <stdio.h>

// int	main()
// {
// 	char *result = ft_strtrim("hth Salut a tous comment ca fart haha", "ah");
// 	if (result)
// 	{
// 		printf("%s", result);
// 		free (result);
// 	}
// 	else
// 		printf("ca po marchay");
// 	return (0);
// }
