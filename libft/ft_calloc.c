/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 02:10:40 by lionelulm         #+#    #+#             */
/*   Updated: 2023/12/05 04:46:19 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	test;

	test = nmemb * size;
	if (size && nmemb && (test / nmemb != size))
		return (NULL);
	ptr = malloc(test);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, (test));
	return (ptr);
}
