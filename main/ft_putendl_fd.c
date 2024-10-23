/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:03:06 by liulm             #+#    #+#             */
/*   Updated: 2024/10/23 16:23:05 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

// #include <stdio.h>

// int	main()
// {
// 	int	fd = open("putendlfdtest.txt", O_RDONLY | O_WRONLY);
// 	if (fd == -1)
// 	{
// 		printf("file not found");
// 		return (0);
// 	}
// 	printf("%d\n", fd);
// 	ft_putendl_fd("Salut", fd);
// 	close (fd);
// 	return (0);
// }
