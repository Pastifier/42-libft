/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:40:59 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/04 17:41:00 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Returns `1` if `c` represents a printable character
* according to the ASCII table, and `0` otherwise. 
*/
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
