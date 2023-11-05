/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:01:35 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/05 23:24:37 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Returns the lowercase variant of an uppercase character.
	If the character is not alphabetic, the same character
	is returned.

	(This function casts `c` to a `char` in its implementation,
	so using non-ASCII values is pretty-much useless).
*/
char	ft_tolower(int c)
{
	if (!ft_isalpha(c) || (char)c >= 'a')
		return (c);
	return (c + 32);
}
