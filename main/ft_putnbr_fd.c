/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:14:11 by liulm             #+#    #+#             */
/*   Updated: 2024/10/23 16:55:34 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

// #include <stdio.h>

// int	main()
// {
// 	int	fd = open("putnbrfdtest.txt", O_RDONLY | O_WRONLY);
// 	if (fd == -1)
// 	{
// 		printf("file not found");
// 		return (0);
// 	}
// 	printf("%d\n", fd);
// 	ft_putnbr_fd(2147483647, fd);
// 	close (fd);
// 	return (0);
// }
