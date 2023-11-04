/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:59:52 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/04 17:59:53 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Copies the input string into a destination string.
 	If the destination buffer, limited by its size, isn't
  	large enough to hold the copy, the resulting string is truncated
   	(but it is guaranteed to be null-terminated).
    	It returns the length of the total string they tried to create.

     	(The programmer is responsible for inputting an accurate size).
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t sz)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len > --sz)
		src_len = sz;
	i = -1;
	while (++i < src_len && src[i])
		dst[i] = src[i];
	dst[i] = 0;
	return (src_len);
}
