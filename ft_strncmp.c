/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:00:41 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/04 18:00:42 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
	Compares `n` bytes of `s1` and `s2` and returns the
 	difference of the first non-equal value
  	(difference of the first difference hehe).

   	This function is NOT safe, and you should use it only when
    	you're sure of the size. Not using true C strings will
     	cause undefined behaviour!!
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!s1 || !s2 || !n)
		return (0);
	i = -1;
	while (++i < n)
	{
		if (!(s1[i]) || s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
