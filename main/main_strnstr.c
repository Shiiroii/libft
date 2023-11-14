/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:04:00 by lulm              #+#    #+#             */
/*   Updated: 2023/11/14 16:15:58 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	main()
{
	char	*bigt = NULL;
	char	*littlet = NULL;
	char	*ft;
	char	*example;

    ft = ft_strnstr(bigt, littlet, 40);
    example = strnstr(bigt, littlet, 40);
    printf("%s\n", bigt);
    printf("ft_strnstr: %s\n", ft);
    printf("strnstr: %s\n", example);
    return(0);
}
