/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:04:00 by lulm              #+#    #+#             */
/*   Updated: 2023/11/13 14:07:48 by lulm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	main()
{
	char	bigt[100] = "bonjour bonsoir il est actuellement";
	char	littlet[100] = " bonsoir";

	printf("%s\n", bigt);
	unsigned int	result = ft_strlcat(bigt, littlet, 100);
	printf("%s\n return: %d", bigt, result);
	return(0);
}
