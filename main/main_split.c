/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 05:08:16 by lionelulm         #+#    #+#             */
/*   Updated: 2023/11/18 03:03:26 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// gcc -Werror -Wextra -Wall ft_split.c ft_strlcpy.c ft_strlen.c

void free_array(char **array) {
	if (array)
	{
		int i = 0;
		while (array[i] != '\0')
		{
			free(array[i]);
			i++;
		}
		free(array);
	}
}

int main()
{
	char str[30] = "Oui bonjour c'est moi";
	char **result = ft_split(str, ' ');
	printf("first string:%s\n", result[0]);
	printf("second string:%s\n", result[1]);
	printf("third string:%s\n", result[2]);
	printf("fourth string:%s\n", result[3]);
	printf("fifth string:%s\n", result[4]);
	free_array(result);
	return (0);
}
