/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:41:28 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/04 17:41:29 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Takes a pointer to a list, and sets `new` as the head of that list.

 * (Previous content gets pushed after the new head).
 * (Feeding it an invalid `lst` pointer will cause it to do nothing).
 * (Feeding it an invalid node is undefined behaviour).
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	if (*lst)
		new->next = *lst;
	*lst = new;
}
