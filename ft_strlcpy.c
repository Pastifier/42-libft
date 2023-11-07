/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:59:52 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/07 15:10:28 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t sz)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len > --sz)
		src_len = sz;
	i = -1;
	while (++i < src_len && dst[i])
		dst[i] = src[i];
	dst[i] = 0;
	return (src_len);
}
