/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:39:19 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/05 23:51:50 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Zeros out a block of memory pointed to by `s`.
 
	This function is NOT safe! Only use it when you're
	sure `n` is within the range of memory you're allowed
	after `s`. 
 * (It's on the user to provide valid inputs. Otherwise,
 	it's undefined behaviour).
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
