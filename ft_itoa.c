/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:41:09 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/07 11:29:28 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Reverses `str`.
*/
static void	revstr(char *str);

/*
	Returns the absolute value of `nbr`.
*/
static int	absolute(int nbr);

char	*ft_itoa(int n)
{
	char	*self;
	int		sign;
	size_t	length;

	sign = (n < 0);
	self = ft_calloc(11 + sign, sizeof(char));
	if (!self)
		return (NULL);
	self[0] = 0;
	length = 1;
	while (n != 0)
	{
		self[length++] = '0' + absolute(n % 10);
		n = (n / 10);
	}
	if (sign)
		self[length] = '-';
	revstr(self);
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
