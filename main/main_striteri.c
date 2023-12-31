/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:49:51 by lionelulm         #+#    #+#             */
/*   Updated: 2023/12/04 10:58:32 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void print_index_and_char(unsigned int i, char *c)
{
	printf("index: %u, char: %c\n", i, *c);
}

int main()
{
	char str[] = "Coucou toi";

	printf("debut: %s\n", str);
	ft_striteri(str, &print_index_and_char);

	return (0);
}
