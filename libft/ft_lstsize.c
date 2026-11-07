/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobelkha <yobelkha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:38:59 by yobelkha          #+#    #+#             */
/*   Updated: 2026/11/04 15:05:45 by yobelkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	if (!lst)
		return (0);
	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
// #include <stdio.h>
// int main(void)
// {
// 	t_list *head;
// 	t_list *node1;
// 	t_list *node2;

// 	head = ft_lstnew("hello");
// 	node1 = ft_lstnew("Youssef");
// 	node2 = ft_lstnew("word");

// 	head->next = node1;
// 	node1->next = node2;
// 	node2->next = NULL;
// 	unsigned int size;
// 	size = ft_lstsize(head);
// 	while (head)
// 	{
// 		printf("the content of this node is : %s\n", (char *)head->content);
// 		head = head->next;
// 	}
// 	printf("the size of this list is : %d\n", size);
// 	return 0;
// }
