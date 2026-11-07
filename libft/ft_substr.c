/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobelkha <yobelkha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:52:01 by yobelkha          #+#    #+#             */
/*   Updated: 2026/10/30 16:16:04 by yobelkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l;
	size_t	sub_l;
	char	*str;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (start >= l)
		len = 0;
	else if (len > l - start)
		len = l - start;
	sub_l = len;
	str = malloc(sub_l + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
// int main(void)
// {
// 	char *s = "kkkkkkkkkk";
// 	printf("%s\n", ft_substr(s, 6, 9));
// }
