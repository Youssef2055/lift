/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobelkha <yobelkha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 14:42:02 by yobelkha          #+#    #+#             */
/*   Updated: 2026/11/02 14:10:19 by yobelkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// void	del(void *content)
// {
// 	free(content);
// }
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free (lst);
}
// int main(void)
// {
// 	t_list *node;

// 	node = ft_lstnew("hello");
// 	ft_lstdelone(node, del);
// 	printf("%s", (char *)node->content);
// }
