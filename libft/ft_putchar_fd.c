/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobelkha <yobelkha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:46:39 by yobelkha          #+#    #+#             */
/*   Updated: 2026/10/30 15:31:56 by yobelkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main(void)
// {
// 	// int fd;

// 	// fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	// if (fd == -1)
// 	// 	return (1);
// 	// printf("fd = %d/n", fd);
// 	ft_putchar_fd('c', 1);
// 	// close(fd);
// 	// return 0;
// }
