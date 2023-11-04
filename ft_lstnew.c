/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:42:53 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/04 17:42:54 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Initialises your list and returns a pointer to work with.
 * The node's value is represented by `content`.
 * (`content` can be of any base type).
 * The next node is set to NULL by default.
 * Returns NULL on allocation failure and thus makes the list invalid.

 * (Performing operations on an invalid list is undefined behaviour).
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*self;

	self = malloc(sizeof(t_list));
	if (!self)
		return (self);
	self->content = content;
	self->next = NULL;
	return (self);
}
