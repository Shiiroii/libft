/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:14:16 by lulm              #+#    #+#             */
/*   Updated: 2023/11/18 02:46:04 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*cpy_word(char *str, char c)
{
	int		i;
	char	*array;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
	{
		i++;
	}
	array = (char *)malloc(sizeof(char) * (i + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(array, str, i + 1);
	return (array);
}

int	word_number(char *str, char c)
{
	int	i;
	int	nbr;
	int	word;

	i = 0;
	nbr = 0;
	word = 0;
	while (str[i] != '\0' && str[i] == c)
		i++;
	while (str[i])
	{
		if (str[i] == c)
		{
			while (str[i] != '\0' && str[i] == c)
				i++;
			if (str[i] != '\0')
				nbr++;
		}
		else
			i++;
		if (str[i] != '\0' && str[i] != c)
			word = 1;
	}
	return (word + nbr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		str;
	char	**array;

	i = 0;
	str = word_number((char *)s, c);
	array = malloc(sizeof(char *) * (str + 1));
	if (s == NULL)
		return (NULL);
	if (array == NULL)
		return (NULL);
	while (i < str)
	{
		while (s[0] == c)
			s++;
		if ((array[i] = cpy_word((char *)s, c)) == NULL)
		{
			while (i > 0)
				free(array[i--]);
			free(array);
			return (NULL);
		}
		s += ft_strlen(array[i]);
		i++;
	}
	array[i] = 0;
	return (array);
}
