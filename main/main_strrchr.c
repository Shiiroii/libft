/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:08:55 by lulm              #+#    #+#             */
/*   Updated: 2023/11/05 16:19:47 by lulm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*main pour trouver le dernier caractere c*/

int	main(void)
{
	char	*test;
	char	*teststrrchr;
	char	chaine[] = "abcdecfg";

	test = strrchr(chaine, 'c');
	teststrrchr = ft_strrchr(chaine, 'c');
	if (test != NULL)
	{
		printf("test = %s\n", test);
		printf ("teststrrchr = %s\n", teststrrchr);
	}
	return (0);
}

/*main avec un caractere null*/

int	main(void)
{
	char	*test;
	char	*teststrrchr;
	char	chaine[] = "abcdecfg";

	test = strrchr(chaine, '\0');
	teststrrchr = ft_strrchr(chaine, '\0');
	if (test != NULL)
	{
		printf("test = %p %s\n", test, test);
		printf ("teststrrchr = %p %s\n", teststrrchr, teststrrchr);
	}
	return (0);
}
