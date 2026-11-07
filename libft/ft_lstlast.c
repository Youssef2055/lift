/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobelkha <yobelkha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 16:08:35 by yobelkha          #+#    #+#             */
/*   Updated: 2026/11/04 00:57:47 by yobelkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
// #include<stdio.h>
// int main(void)
// {
// 	t_list *head;
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	t_list *tail;

// 	head = ft_lstnew("1");
// 	node1 = ft_lstnew("2");
// 	node2 = ft_lstnew("3");
// 	node3 = ft_lstnew("4");
// 	tail = ft_lstnew("5");

// 	head->next = node1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = tail;
// 	tail->next = NULL;

// 	// while (head->next != NULL)
// 	// {
// 	// 	head = head->next;
// 	// }
// 	t_list *result = ft_lstlast(head);
// 	printf("the content of the last node is : %s\n", (char *)result->content);
// }
