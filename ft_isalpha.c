/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:40:27 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/04 17:40:28 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Returns `1` if `c` is an alphabet, and `0` otherwise.
* 
* The function casts `c` to a `char` while performing the check,
* so using anything but ASCII values is pretty much useless. 
*/
int	ft_isalpha(int c)
{
	char	temp;

	temp = (char)c;
	return ((temp >= 'A' && temp <= 'Z') || (temp >= 'a' && temp <= 'z'));
}
