/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:44:35 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/04 17:44:36 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Fills the first n bytes of the memory area pointed
	to by `s` with the constant byte `c`.
	
	(Feeding it an invalid pointer is undefined behaviour).
*/
void	*ft_memset(void *s, int c, size_t n)
{
	char	*dummy;

	dummy = (char *)s;
	while (n--)
		*dummy++ = c;
	return (s);
}
