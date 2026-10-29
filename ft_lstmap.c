/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ourhoutt <ourhoutt@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 16:51:25 by ourhoutt          #+#    #+#             */
/*   Updated: 2026/10/29 00:17:37 by ourhoutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*mapped_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		mapped_content = f(lst->content);
		new_node = ft_lstnew(mapped_content);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// int	main(void)
// {
// 	t_list	*newlist = ft_lstnew(ft_strdup("hello"));

// 	newlist->next = ft_lstnew(ft_strdup("world"));
// 	newlist->next->next = ft_lstnew(ft_strdup("hsghsg"));
// 	t_list	*list = ft_lstmap(newlist, ft_upper, free);

// 	printf("%s\n", (char *) list->content);
// 	printf("%s\n", (char *) list->next->content);
// 	printf("%s\n", (char *) list->next->next->content);
// }
