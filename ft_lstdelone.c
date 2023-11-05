/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:42:34 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/04 17:42:35 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * Takes a node and applies `del` to its contents (usually a deleting function)
 * and frees the node `free(3)`

 * (Feeding it an invalid node or function pointer will cause it to do nothing).
 * (Using a non-deleting function is undefined behaviour).
 * (Deleting a node in the middle/start of the list, will cause a memory-leak;
 * since you won't be able to access the successive nodes anymore).
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del || !lst)
		return ;
	(*del)(lst->content);
	free(lst);
}
