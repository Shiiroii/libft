/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:11:23 by liulm             #+#    #+#             */
/*   Updated: 2024/10/21 13:57:09 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	test;

	test = nmemb * size;
	if (size && nmemb && (test / nmemb != size))
		return (NULL);
	ptr = malloc(test);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (test));
	return (ptr);
}

// #include <limits.h>
// #include <errno.h>
// #include <stdio.h>
// #include <stdint.h>

// int main()
// {
// 	size_t c = 18446744073709551615UL / 3 + 1;
// 	size_t s = 3;
// 	size_t x = c * s;
// 	char *p = ft_calloc(c, s);
// 	char *r = calloc(c, s);
// 	printf("c * s    %lu\n", x);
// 	printf("SIZE_MAX %lu\n", SIZE_MAX);
// 	printf("address  %p\nerrno    %d\n", p, errno);
// 	printf("address  %p\nerrno    %d\n", r, errno);
// 	free(p);
// 	free(r);
// 	return (0);
// }
