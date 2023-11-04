/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:27:30 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/05 02:25:43 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*
	Returns a new list with `f` applied on `lst` and
	all its subsequent nodes. Returns NULL, and frees
	memory on error.

	(`lst` must be a valid list).
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*self;

	if (!f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		self = ft_lstnew((*f)(lst->content));
		if (!self)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, self);
		lst = lst->next;
	}
	return (head);
}
