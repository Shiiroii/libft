/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 03:56:34 by lionelulm         #+#    #+#             */
/*   Updated: 2023/11/13 05:27:25 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main()
{
	char	dst[100] = "bonjour bonsoir il est actuellement";
	char	src[100] = " quatre heures du matin";

	printf("%s\n", dst);
	unsigned int	result = ft_strlcat(dst, src, 100);
	printf("%s\n return: %d", dst, result);
	return(0);
}
