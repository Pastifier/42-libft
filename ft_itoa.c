/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:41:09 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/04 17:41:10 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	revstr(char *str);
static int	absolute(int nbr);

/*
	Converts an integer `n` to its ASCII representation,
	and returns a string of that representation.

	(Feeding it a non-integer value is undefined behaviour).
*/
char	*ft_itoa(int n)
{
	char	*self;
	int		sign;
	size_t	length;

	sign = (n < 0);
	self = ft_calloc(11 + sign, sizeof(char));
	if (!self)
		return (NULL);
	if (n == 0)
		self[0] = 0;
	length = 0;
	while (n != 0)
	{
		self[length++] = '0' + absolute(n % 10);
		n = (n / 10);
	}
	if (sign)
		self[length] = '-';
	revstr(self);
	self[++length] = 0;
	return (self);
}

int	absolute(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

void	revstr(char *str)
{
	char	tmp;
	size_t	len;
	size_t	i;

	len = ft_strlen(str);
	i = -1;
	while (++i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
	}
}
