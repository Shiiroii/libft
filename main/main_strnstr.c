/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:04:00 by lulm              #+#    #+#             */
/*   Updated: 2023/11/14 14:24:29 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	main()
{
	char	*bigt = "bonjour bonsoir il est actuellement";
	char	*littlet = "bonsoir";
	char	*ptr;

	ptr = strnstr(bigt, littlet, 40);

	printf("%s\n", bigt);
	char	*result = ft_strnstr(bigt, littlet, 40);
	printf("%s\n result:", result);
	printf("%s\n strnstr:", ptr);
	return(0);
}
