/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:39:55 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/07 11:28:15 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t n)
{
	void	*self;
	size_t	total_size;

	total_size = n * nmemb;
	if (!total_size)
		total_size = 1;
	if (nmemb > SIZE_MAX / n)
		return (NULL);
	self = malloc(total_size);
	if (!self)
		return (NULL);
	ft_bzero(self, total_size);
	return (self);
}
