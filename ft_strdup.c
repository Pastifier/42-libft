/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:45:28 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/04 17:45:29 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Returns a duplicate to the string `s1`
 	(idk why it's prototyped as such).

  	(`s1` must be a true C string).
*/
char	*ft_strdup(const char *s1)
{
	char	*self;
	char	*dummy;

	self = malloc(ft_strlen(s1) + 1);
	if (!self)
		return (NULL);
	dummy = self;
	while (*s1)
		*dummy++ = *(char *)s1++;
	*dummy = 0;
	return (self);
}
