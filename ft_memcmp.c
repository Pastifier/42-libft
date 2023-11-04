/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:43:20 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/04 17:43:21 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Compares two memory regions of size `n`.

	Returns  an  integer less than, equal to, or greater than zero
	if the first n bytes of s1 is found, respectively, to be less than, to match,
	or be greater than the first n bytes of s2.

	(Feeding it invalid pointers is undefined behaviour).
*/
int	ft_memcmp(const void *p1, const void *p2, size_t n)
{
	size_t			i;
	unsigned char	*p1_ptr;
	unsigned char	*p2_ptr;

	p1_ptr = (unsigned char *)p1;
	p2_ptr = (unsigned char *)p2;
	i = -1;
	while (++i < n)
	{
		if (p1_ptr[i] != p2_ptr[i])
			return (p1_ptr[i] - p2_ptr[i]);
	}
	return (0);
}
