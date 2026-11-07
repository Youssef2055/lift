/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobelkha <yobelkha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 17:17:00 by yobelkha          #+#    #+#             */
/*   Updated: 2026/10/30 15:35:35 by yobelkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
// #include <stdio.h>
// int main(void)
// {
// 	t_list *head;
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *tail;

// 	head = ft_lstnew("Hello");
// 	node1 = ft_lstnew("Youssef");
// 	node2 = ft_lstnew("how are");
// 	tail = ft_lstnew("you");

// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, tail);

// 	while (head)
// 	{
// 		printf("%s\n", (char *)head->content);
// 		head = head->next;
// 	}
// }
