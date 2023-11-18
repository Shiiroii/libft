/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 03:05:03 by lionelulm         #+#    #+#             */
/*   Updated: 2023/11/18 03:09:13 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main()
{
	const char *str1 = "Coucou Patrick";
	const char *str2 = "Coucou toi";
	size_t n = 15;

	int result = ft_memcmp(str1, str2, n);
	if (result == 0)
	{
		printf("%zu bytes are equal.\n", n);
	}
	return 0;
}
