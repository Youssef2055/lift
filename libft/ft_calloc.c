/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobelkha <yobelkha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:11:00 by yobelkha          #+#    #+#             */
/*   Updated: 2026/11/04 18:28:20 by yobelkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;
	size_t	i;

	total = nmemb * size;
	if (nmemb == 0 || size == 0)
		total = 1;
	else if (total / nmemb != size)
		return (NULL);
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < total)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
// int main(void)
// {
// 	int *arr;
// 	arr = ft_calloc(10, 10);
	// printf("Size of int: %zu\n", sizeof(int));
	// printf("Total bytes: %zu\n", 5 * sizeof(int));
	// int i = 0;
	// while (i < 5)
	// {
	// 	printf("%d\n", arr[i]);
	// 	i++;
	// }
// 	printf("%p", arr);
// 	free(arr);
// }
