/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:43:37 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/04 17:43:38 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Copies `n` bytes from memory area `src` to memory area `dst`. 
	
	The memory areas may overlap: copying takes place as though the
	bytes in `src` are first copied into a temporary array that does
	not overlap `src` or `dst`, and the bytes are then copied
	from the temporary array to `dst`.

	Returns a pointer to `dst`, NULL if either dst or src aren't valid.
*/
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;

	dst_ptr = (unsigned char *)dst;
	src_ptr = (unsigned char *)src;
	if (!dst || !src)
		return (NULL);
	if (dst_ptr == src_ptr)
		return (dst);
	if (dst < src)
		ft_memcpy(dst, src, n);
	else
	{
		while (n--)
			((char *)dst)[n] = ((char *)src)[n];
	}
	return (dst);
}
