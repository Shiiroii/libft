/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main _strchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:09:14 by lulm              #+#    #+#             */
/*   Updated: 2023/11/05 15:24:04 by lulm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*test;
	char	*teststrchr;
	char	chaine[] = "abcdefg";

	test = strchr(chaine, 'c');
	teststrchr = ft_strchr(chaine, 'c');
	if (test != NULL)
	{
		printf("test = %s\n", test);
		printf ("teststrchr = %s\n", teststrchr);
	}
	return (0);
}
