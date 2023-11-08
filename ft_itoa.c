/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:41:09 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/08 14:57:33 by ebinjama         ###   ########.fr       */
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

/*
	Returns the number of digits in nbr.
*/
static short	digitnum(int nbr);

char	*ft_itoa(int n)
{
	char	*self;
	int		sign;
	size_t	length;

	sign = (n < 0);
	self = ft_calloc(digitnum(n) + sign + 1, sizeof(char));
	if (!self)
		return (NULL);
	if (n == 0)
	{
		self[0] = '0';
		return (self);
	}
	length = 0;
	while (n)
	{
		self[length++] = '0' + absolute(n % 10);
		n /= 10;
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

short	digitnum(int nbr)
{
	short	count;
	
	count = 0;
	if (!nbr)
		return (1);
	if (nbr == INT_MIN)
		return (7);
	while (nbr)
	{
		++count;
		nbr /= 10;
	}
	return (count);
}