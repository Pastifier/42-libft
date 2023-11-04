/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:00:56 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/04 18:00:57 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*store;

	ptr = (char *)s;
	store = NULL;
	if (!ptr)
		return (NULL);
	while (*ptr)
	{
		if (*ptr == (char)c)
			store = ptr;
		ptr++;
	}
	if (!(char)c)
		return (ptr);
	return (store);
}
