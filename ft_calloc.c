/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:39:55 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/06 15:04:10 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Allocates memory for an array of nmemb elements of `n` bytes each 
 * and returns a pointer to the allocated memory, and the memory is 
 * filled with zeroes (value). 
 * If `nmemb` or `n` is 0, NULL is returned.
 */
void	*ft_calloc(size_t nmemb, size_t n)
{
	void	*self;
	size_t	total_size;

	total_size = n * nmemb;
	if (!total_size)
		return (NULL);
	if (nmemb > SIZE_MAX / n)
		return (NULL);
	self = malloc(total_size);
	if (!self)
		return (NULL);
	ft_bzero(self, total_size);
	return (self);
}
