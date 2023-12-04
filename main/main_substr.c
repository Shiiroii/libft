/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:07:39 by lionelulm         #+#    #+#             */
/*   Updated: 2023/12/04 11:13:30 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
	const char		*str1;
	unsigned int	start1;
	size_t			len1;
	char			*substr1;

	str1 = "Coucou";
	start1 = 4;
	len1 = 6;
	substr1 = ft_substr(str1, start1, len1);
	printf("original : \"%s\", substr : \"%s\"\n", str1, substr1);
	free(substr1);
	return 0;
}
