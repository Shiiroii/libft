/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:17:23 by lionelulm         #+#    #+#             */
/*   Updated: 2024/10/23 16:23:06 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <stdio.h>

// int	main()
// {
// 	int	fd = open("putcharfdtest.txt", O_RDONLY | O_WRONLY);
// 	if (fd == -1)
// 	{
// 		printf("file not found");
// 		return (0);
// 	}
// 	printf("%d\n", fd);
// 	ft_putchar_fd('n', fd);
// 	close (fd);
// 	return (0);
// }
