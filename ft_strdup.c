/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:45:28 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/06 00:18:59 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Returns a duplicate to the string `str`

  	(`str` must be a true C string).
*/
char	*ft_strdup(const char *str)
{
	char	*self;
	char	*dummy;

	self = malloc(ft_strlen(str) + 1);
	if (!self)
		return (NULL);
	dummy = self;
	while (*str)
		*dummy++ = *((char *)str++);
	*dummy = 0;
	return (self);
}
