/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:09:22 by lulm              #+#    #+#             */
/*   Updated: 2023/11/05 13:05:24 by lulm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	mem[] = "HELLOOO";
	char	*dest;
	char	*src;

	src = mem;
	dest = mem + 2;
	ft_memmove(dest, src, 5);
	printf("%s | %s\n", src, dest);
}
