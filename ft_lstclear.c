/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:41:36 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/04 18:21:05 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Deletes and frees the given node and every
	successor of that node, using the function `del`
	and `free(3)`.

	(If either `del`, `lst`, or `*lst` are invalid, nothing happens).
	(Feeding it a non-deletion function is undefined behaviour).
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;

	if (!del || !lst || !(*lst))
		return ;
	while (*lst)
	{
		curr = *lst;
		*lst = curr->next;
		ft_lstdelone(curr, del);
	}
	*lst = NULL;
}
