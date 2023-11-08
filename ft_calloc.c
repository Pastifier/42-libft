/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:39:55 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/07 21:54:06 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t n)
{
	void	*self;
	size_t	total_size;

	if (!n || !nmemb)
	{
		n = 1;
		nmemb = 1;
	}
	if (nmemb > SIZE_MAX / n || n > SIZE_MAX / nmemb)
		return (NULL);
	total_size = n * nmemb;
	self = malloc(total_size);
	if (!self)
		return (NULL);
	ft_bzero(self, total_size);
	return (self);
}
