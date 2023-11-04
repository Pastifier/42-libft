/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:59:17 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/04 17:59:18 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Returns a string which is the result of joining
 	`s1` and `s2`

  	(Both strings must be true C strings).
*/
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*self;
	char	*dummy;
	size_t	len;

	len = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s1 && s2)
		len = ft_strlen(s2);
	else if (s1 && s2)
		len = ft_strlen(s1) + ft_strlen(s2);
	self = malloc(sizeof(char) * (len + 1));
	if (!self)
		return (NULL);
	dummy = self;
	if (s1)
		while (*s1)
			*dummy++ = *s1++;
	if (s2)
		while (*s2)
			*dummy++ = *s2++;
	*dummy = 0;
	return (self);
}
