/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 04:13:18 by lionelulm         #+#    #+#             */
/*   Updated: 2023/11/17 05:47:16 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
		char	strs[10] = "Salut";
		char	sets[10] = "S";
		char	stre[10] = "Salut";
		char	sete[10] = "t";
	char	*start = ft_strtrim(strs, sets);
	char	*end = ft_strtrim(stre, sete);
	printf("result start: %s\n", start);
	printf("result end: %s\n", end);
	return 0;
}
