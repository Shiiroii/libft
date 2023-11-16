/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 22:00:43 by lionelulm         #+#    #+#             */
/*   Updated: 2023/11/16 13:55:52 by lulm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*startofstr(char const *s1s, int i)
{
	i = 0;
}

char	*endofstr(char const *s1e, int i)
{
	i = 0;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	i = 0;
	while (set[i] != s1[i])
	{

	}
}
