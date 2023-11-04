/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:39:55 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/04 17:39:56 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Allocates memory for an array of nmemb elements of size bytes each 
 * and returns a pointer to the allocated memory, and the memory is set to zero. 
 * If `nmemb` or `n` is 0, NULL is returned.
 */
void	*ft_calloc(size_t nmemb, size_t n)
{
	char	*self;
	size_t	total_size;

	total_size = n * nmemb;
	self = malloc(total_size);
	if (!self)
		return (NULL);
	ft_memset(self, 0, total_size);
	return (self);
}
