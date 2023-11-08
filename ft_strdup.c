/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:45:28 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/08 15:47:59 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*self;
	char	*dummy;

	self = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!self)
		return (NULL);
	dummy = self;
	while (*str)
		*dummy++ = *((char *)str++);
	*dummy = 0;
	return (self);
}
