/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobelkha <yobelkha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:26:17 by yobelkha          #+#    #+#             */
/*   Updated: 2026/11/05 14:39:57 by yobelkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		ca;
	size_t				i;

	str = (const unsigned char *)s;
	ca = (unsigned char )c;
	i = 0;
	while (i < n)
	{
		if (str[i] == ca)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
// int main(void)
// {
// 	char *x = "Hello";
// 	int c = 'l';
// 	char *p = ft_memchr(x, c, 11);
// 	printf("%s", p);
// }
