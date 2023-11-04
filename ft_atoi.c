/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:39:03 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/04 17:39:04 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_white(int c);

/*
 * Takes a true C string (null-terminated) and converts it to its
 * integer representation.
 * Whitespace at the start will be ignored, and non-digit characters will stop
 * execution if present anywhere within the string.
 * 
 * (If the resulting int representation is not within 
 * INT_MIN to INT_MAX, it's undefined behaviour).
 * 
 * 
 * EXAMPLE OF INVALID INPUT:
 * "   sdf -+29skj"
 * 
 * EXAMPLE OF VALID INPUT:
 * "       -20001"
 */
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

int	is_white(int c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\v' || c == '\f');
}
