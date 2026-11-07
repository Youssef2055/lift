/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobelkha <yobelkha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:22:40 by yobelkha          #+#    #+#             */
/*   Updated: 2026/10/30 15:27:24 by yobelkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	l;

	l = ft_strlen(s);
	while (l >= 0)
	{
		if (s[l] == (char) c)
			return ((char *)&s[l]);
		l--;
	}
	if (c == '\0')
	{
		return ((char *)&s[l]);
	}
	return (NULL);
}
// int main(void)
// {
// 	char x[] = "Hello Youssf";
// 	char *p;
// 	p = ft_strrchr(x, 'i');
// 	printf("Found at %s\n", p);
// }
