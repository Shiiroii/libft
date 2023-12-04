/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:44:17 by lionelulm         #+#    #+#             */
/*   Updated: 2023/12/04 10:45:51 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main() {
	int		num;
	char	*result;

	num = 12345;
	result = ft_itoa(num);
	if (result != NULL)
	{
		printf("int : %d\n", num);
		printf("str : %s\n", result);
		free(result);
	}
	else
	{
		printf("error\n");
	}
	return (0);
}
