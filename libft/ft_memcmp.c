/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobelkha <yobelkha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:37:25 by yobelkha          #+#    #+#             */
/*   Updated: 2026/10/30 16:13:59 by yobelkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s01;
	const unsigned char	*s02;
	size_t				i;

	s01 = (const unsigned char *)s1;
	s02 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s01[i] != s02[i])
			return (s01[i] - s02[i]);
		i++;
	}
	return (0);
}
// int main(void)
// {
// 	char x[] = {'a', '\0', 'q'};
// 	char y[] = {'b', '\0', 'q'};
// 	printf("%d", ft_memcmp(x, y, 3));
// }
