/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 23:16:32 by lionelulm         #+#    #+#             */
/*   Updated: 2023/12/04 10:55:28 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	size_t	int_size;
	size_t	num_elements;
	int		*int_array;

	int_size = sizeof(int);
	num_elements = 5;
	int_array = (int *)ft_calloc(num_elements, int_size);
	if (int_array != NULL)
	{
		int_array[0] = 10;
		int_array[1] = 20;
		int_array[2] = 30;
		int_array[3] = 40;
		int_array[4] = 50;

		printf("int_array[0]: %d\n", int_array[0]);
		printf("int_array[1]: %d\n", int_array[1]);
		printf("int_array[2]: %d\n", int_array[2]);
		printf("int_array[3]: %d\n", int_array[3]);
		printf("int_array[4]: %d\n", int_array[4]);

		free(int_array);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return 0;
}
