/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 03:12:50 by lionelulm         #+#    #+#             */
/*   Updated: 2023/11/18 03:36:11 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	char *src = "Coucou toi";
	char dest[20];

	size_t n = 3;
	dest[n] = '\0';
	ft_memcpy(dest, src, n);
	printf("Source: %s\n", src);
	printf("Dest: %s\n", dest);
	return 0;
}
