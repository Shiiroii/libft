/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 03:56:34 by lionelulm         #+#    #+#             */
/*   Updated: 2023/11/17 11:41:03 by lulm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char			dst[100] = "bonjour bonsoir il est actuellement";
	char			src[100] = " quatre heures du matin";

	printf("%s\n", dst);
	unsigned int	result = ft_strlcat(dst, src, 100);
	printf("%s\n return: %d", dst, result);
	return(0);
}
