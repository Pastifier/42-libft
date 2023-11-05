/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:45:20 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/05 23:27:18 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Searches the string `s` for the first occurence of
 	the character `c`.

  	(`s` must be a true, null-terminated, C string).
   	(`c` is typecasted to `char`, so using non-ASCII values
    is pretty-much useless).
*/
char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	if (!ptr)
		return (NULL);
	while (*ptr)
	{
		if (*ptr == (char)c)
			return (ptr);
		ptr++;
	}
	if (!(char)c)
		return (ptr);
	return (NULL);
}
