/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:43:11 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/04 17:43:12 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Searches a block of memory of, size `n` bytes,
	for the first occurence of `c`, and returns a
	pointer to that location.
	Returns a NULL pointer if fed an invalid `s` value.
	
	(`c` is casted into an `unsigned char`, so providing
	lower or higher values is undefined behaviour).
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*self;

	if (!s)
		return (NULL);
	self = (unsigned char *)s;
	while (n--)
	{
		if (*self == (unsigned char)c)
			return ((void *)self);
		self++;
	}
	return (NULL);
}
