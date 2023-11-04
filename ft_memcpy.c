/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:43:28 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/04 17:43:29 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	copies n bytes from memory area src to memory area dest.
	The memory areas must not overlap, and `n` has to be positive.

	Returns a pointer to dst if dst is valid. Otherwise, NULL is returned.
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;

	dst_ptr = (unsigned char *)dst;
	src_ptr = (unsigned char *)src;
	if (!dst || !src)
		return (NULL);
	if (dst_ptr == src_ptr)
		return (dst);
	while (n--)
		*dst_ptr++ = *src_ptr++;
	return (dst);
}
