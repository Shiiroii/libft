/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:39:49 by lionelulm         #+#    #+#             */
/*   Updated: 2024/10/18 11:09:38 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*temp_s1;
	unsigned char	*temp_s2;
	size_t			len;

	temp_s1 = (unsigned char *)s1;
	temp_s2 = (unsigned char *)s2;
	len = 0;
	while (len < n)
	{
		if (temp_s1[len] != temp_s2[len])
			return (temp_s1[len] - temp_s2[len]);
		len++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	const char *str1 = "Coucou Patrick";
// 	const char *str2 = "Coucop Patrick";

// 	int result = ft_memcmp(str1, str2, 6);
// 	int result2 = memcmp(str1, str2, 6);
// 	if (result == 0 && result2 == 0)
// 	{
// 		printf("all bytes are equal.\n");
// 		return (0);
// 	}
// 	printf("ft_memcmp : the bytes are different : %d\n", result);
// 	printf("memcmp : the bytes are different : %d", result2);
// 	return (0);
// }
