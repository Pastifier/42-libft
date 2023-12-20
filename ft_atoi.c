/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:39:03 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/10 21:11:20 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Returns true if a character is whitespace.
*/
static bool	is_white(int c);
static bool	init_atoi(const char *str, int *pom, t_ull *res);
static bool	is_permissible(int c);

t_eint	ft_atoi(const char *str)
{
	int					sign;
	unsigned long long	result;

	if (!init_atoi(str, &sign, &result))
		return ((t_eint){.value = 0, .error = true});
	while (is_permissible(*str))
		++str;
	while (ft_isdigit(*str))
	{
		result = (result * 10) + ((char)(*str) - '0');
		++str;
	}
	if (result >= 9223372036854775807ULL && sign < 0)
		return ((t_eint){.value = 0, .error = true});
	else if (result >= 9223372036854775807ULL && sign > 0)
		return ((t_eint){.value = -1, .error = true});
	return ((t_eint){.value = result * sign, .error = false});
}

bool	is_white(int c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\v' || c == '\f');
}

bool	init_atoi(const char *str, int *pom, t_ull *res)
{
	*pom = 1;
	*res = 0;
	while (is_white(*str))
		str++;
	if (*str == '-')
		*pom *= -1;
	if (*str == '-' || *str == '+')
		++str;
	if (!*str || *str == '-' || *str == '+'
		|| is_white(*str))
		return (false);
	if (ft_strlen(str) > 10)
		return (false);
	return (true);
}

static bool	is_permissible(int c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\v' || c == '\f'
		|| c == '+' || c == '-');
}
