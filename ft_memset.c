/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:44:35 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/05 23:52:51 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Fills the first n bytes of the memory area pointed
	to by `s` with the constant byte `c`.
	
	This function is NOT safe! Only use it when you're
	sure `n` is within the range of memory you're allowed
	after `s`.
	(It's on the user to provide valid inputs. Otherwise,
	it's undefined behaviour).
*/
void	*ft_memset(void *s, int c, size_t n)
{
	char	*dummy;

	dummy = (char *)s;
	while (n--)
		*dummy++ = c;
	return (s);
}
