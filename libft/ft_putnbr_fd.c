/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobelkha <yobelkha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:43:09 by yobelkha          #+#    #+#             */
/*   Updated: 2026/10/22 17:08:35 by yobelkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 0 && n <= 9)
	{
		ft_putchar_fd((n + 48), fd);
		return ;
	}
	if (n > 9)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd(((n % 10) + 48), fd);
	}
}

// int main(void)
// {
// 	ft_putnbr_fd(22, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(2, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(-22, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(-2, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(24452, 1);
// }
