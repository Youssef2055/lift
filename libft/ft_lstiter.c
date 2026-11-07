/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobelkha <yobelkha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:03:14 by yobelkha          #+#    #+#             */
/*   Updated: 2026/11/02 15:51:32 by yobelkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// void	f(void *content)
// {
// 	char *s;
// 	int i = 0;

// 	s = (char *)content;
// 	while (s[i])
// 	{
// 		if (s[i] >= 'a' && s[i] <= 'z')
// 			s[i] -= 32;
// 		i++;
// 	}
// }
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// int main(void)
// {
//     t_list  *head;
//     t_list  *current;
//     char    s1[] = "Hello";
//     char    s2[] = "Youssef";
//     char    s3[] = "How are you";
//     head = ft_lstnew(s1);
//     ft_lstadd_back(&head, ft_lstnew(s2));
//     ft_lstadd_back(&head, ft_lstnew(s3));
//     ft_lstiter(head, f);
//     current = head;
//     while (current)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }
//     while (head)
//     {
//         current = head->next;
//         free(head);
//         head = current;
//     }
//     return (0);
// }
