/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:39:55 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/09 06:00:27 by ebinjama         ###   ########.fr       */
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
	if (nmemb > SIZE_MAX / n)
		return (NULL);
	total_size = n * nmemb;
	self = malloc(total_size);
	if (!self)
	{
		free(self);
		return (NULL);
	}
	ft_bzero(self, total_size);
	return (self);
}
