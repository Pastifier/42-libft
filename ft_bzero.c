/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:39:19 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/04 17:39:20 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Zeros out a block of memory pointed to by `s`.
 
 * (It's on the user to provide valid inputs. Otherwise,
 	it's undefined behaviour).
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
