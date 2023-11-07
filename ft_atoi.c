/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:39:03 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/07 11:27:36 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Returns true if a character is whitespace.
*/
static bool	is_white(int c);

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	while (is_white(*str))
		str++;
	sign = 1;
	result = 0;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		++str;
	}
	while (ft_isdigit(*str))
	{
		result = (result * 10) + ((char)(*str) - '0');
		++str;
	}
	return (result * sign);
}

bool	is_white(int c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\v' || c == '\f');
}
