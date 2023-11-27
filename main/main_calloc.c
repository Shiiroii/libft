/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 23:16:32 by lionelulm         #+#    #+#             */
/*   Updated: 2023/11/24 23:28:52 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	size_t count = 1431655766;
	size_t size = 3;
	char *arr = ft_calloc(count, size);

	if (arr)
	{
		printf("array\n");
		free(arr);
	}
	else
		printf("error\n");
	return (0);
}
