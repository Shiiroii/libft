/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 02:54:24 by lionelulm         #+#    #+#             */
/*   Updated: 2023/11/23 15:09:44 by lulm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// gcc -Werror -Wextra -Wall ft_memchr.c ft_strlen.c

int main()
{
	const char *str = "oui c'est la patate";
	char	find_char = 'a';
	size_t	length = ft_strlen(str);

	const void *result = ft_memchr(str, find_char, length);

	if (result != '\0')
	{
		printf("Found character '%c' at position %ld\n", find_char, (size_t)((char *)result - str));
	}
	else
	{
		printf("Character '%c' not found in the string\n", find_char);
	}
	return 0;
}
