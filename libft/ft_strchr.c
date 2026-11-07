/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobelkha <yobelkha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 18:21:52 by yobelkha          #+#    #+#             */
/*   Updated: 2026/11/04 15:58:51 by yobelkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
// int main(void)
// {
// 	char x[] = "llll";
// 	char *p;
// 	p = ft_strchr(x, 'i');
// 	printf("%s\n", p);
// }
// #include <stdio.h>
// int	main(void)
// {
// 	char	x[20] = "";
// 	char	*p;

// 	p = ft_strchr(x, 'e');
// 	if (p != NULL)
// 		printf("%s\n", p);
// 	else
// 		printf("Character not found\n");
// 	return (0);
// }
