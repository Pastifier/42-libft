/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:40:36 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/04 17:40:39 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Returns `1` if `c` is within ASCII range, and `0` otherwise.
* 
* This is a legacy function, and is pretty much useless if you're not
* strictly operating on integers.

* (Although you could probably do some cool maths stuff with it).
*/
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
