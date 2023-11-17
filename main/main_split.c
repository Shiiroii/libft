/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 05:08:16 by lionelulm         #+#    #+#             */
/*   Updated: 2023/11/17 05:09:13 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int main()
{
	char str[20] = "Oui bonjour c'est moi";
	char **result = ft_strsplit(str, ' ');
	printf("result:%s\n", *result);
	printf("result:%s\n", result[0]);
	printf("result:%s\n", result[1]);
	return (0);
}
