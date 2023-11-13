/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main _strchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:09:14 by lulm              #+#    #+#             */
/*   Updated: 2023/11/05 16:19:47 by lulm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*main pour trouver le premier caractere c*/
int	main(void)
{
	char	*test;
	char	*teststrchr;
	char	chaine[] = "abcdecfg";

	test = strchr(chaine, 'c');
	teststrchr = ft_strchr(chaine, 'c');
	if (test != NULL)
	{
		printf("test = %s\n", test);
		printf ("teststrchr = %s\n", teststrchr);
	}
	return (0);
}

/*main pour caractere null*/

int	main(void)
{
	char	*test;
	char	*teststrchr;
	char	chaine[] = "abcdecfg";

	test = strchr(chaine, '\0');
	teststrchr = ft_strchr(chaine, '\0');
	if (test != NULL)
	{
		printf("test = %p %s\n", test, test);
		printf ("teststrchr = %p %s\n", teststrchr, teststrchr);
	}
	return (0);
}
