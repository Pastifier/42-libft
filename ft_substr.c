/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:01:21 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/04 18:01:22 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Returns a new string of size `len` that starts from
 	`s[start]`.

  	Providing invalid input (out-of-range) should be undefined
   	behaviour, but I handled those cases for my own future use:
    	- Providing an index that's larger than the string length
     	  will result in an empty string.
	- Providing a size which is larger than the string length
 	  will force the size to shrink back to the string's true
    	  length (provided it's a true C string).
*/
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*self;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	self = malloc(len + 1);
	if (!self)
		return (NULL);
	while (i < len)
		self[i++] = s[start++];
	self[i] = 0;
	return (self);
}
