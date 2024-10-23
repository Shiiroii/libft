/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:23:06 by lionelulm         #+#    #+#             */
/*   Updated: 2024/10/23 16:23:03 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// #include <stdio.h>

// int	main()
// {
// 	int	fd = open("putstrfdtest.txt", O_RDONLY | O_WRONLY);
// 	if (fd == -1)
// 	{
// 		printf("file not found");
// 		return (0);
// 	}
// 	printf("%d\n", fd);
// 	ft_putstr_fd("Salut", fd);
// 	close (fd);
// 	return (0);
// }
