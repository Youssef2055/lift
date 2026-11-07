/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobelkha <yobelkha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 16:02:36 by yobelkha          #+#    #+#             */
/*   Updated: 2026/10/30 15:35:10 by yobelkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*new;
// 	t_list	*current;
// 	int	x;
// 	int	y;

// 	x = 10;
// 	y = 20;
// 	head = ft_lstnew(&x);
// 	new = ft_lstnew(&y);

// 	ft_lstadd_front(&head, new);
// 	current = head;
// 	while (current)
// 	{
// 		printf("%d\n", *(int *)current->content);
// 		current = current->next;
// 	}

// current = head;
// while (current)
// {
// 	head = current->next;
// 	free(current);
// 	current = head;
// }
// 	return (0);
// }
