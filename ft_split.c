/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:45:14 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/10 21:32:22 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// Calculates the amount of words in the string.
// (A word is a sequence of characters preceding the delimiter: `c`).
// @param str: The string to split.
// @param c: The delimiter character.
static int	wordcount(const char *str, char c);

// Calculates the length of the first word in the string.
// (A word is a sequence of characters preceding the delimiter: `c`).
// @param str: The string to split.
// @param c: The delimiter character.
static int	wordlen(const char *str, char c);

// Takes care of all the allocations. Returns `true` if
// something went wrong; false otherwise.
// `true` was chosen for failure to make ft_split more readable.
// @param arr_ptr: The address of the string array.
// @param str: The string to split.
// @param success: The address of the variable storing the
// 				   number of successful string allocations.
static bool	ealloc(char **arr_ptr, const char *str, char c, size_t *success);

// Frees everything. Called upon failure (`allocate_each(...) == true`).
// @param arr_ptr: The address of the string array.
// @param successes: The number of successful allocations,
// 					 i.e. the number of times to call `free`.
static void	free_all(char **arr_ptr, size_t successes);

t_split	ft_split(const char *s, char c)
{
	t_split	self;
	size_t	successes;
	size_t	word_count;
	bool	abort;

	if (!s)
		return ((t_split){NULL, 0});
	word_count = wordcount(s, c);
	self.array = malloc((word_count + 1) * sizeof(char *));
	self.wordcount = word_count;
	if (!self.array)
		return ((t_split){NULL, 0});
	successes = 0;
	abort = ealloc(self.array, s, c, &successes);
	if (abort)
	{
		free_all(self.array, successes);
		return ((t_split){NULL, 0});
	}
	return (self);
}

int	wordcount(const char *str, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*str)
	{
		if (*str == c)
			flag = 0;
		else if (*str != c && !flag)
		{
			flag = 1;
			count++;
		}
		str++;
	}
	return (count);
}

int	wordlen(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		++i;
	return (i);
}

bool	ealloc(char **arr_ptr, const char *str, char c, size_t *success)
{
	int	i;
	int	j;
	int	wordnum;

	while (*str && *str == c)
		++str;
	i = -1;
	wordnum = wordcount(str, c);
	while (++i < wordnum)
	{
		j = -1;
		arr_ptr[i] = malloc((wordlen(str, c) + 1) * sizeof(char));
		if (!arr_ptr[i])
			return (true);
		while (*str && *str != c)
			arr_ptr[i][++j] = *str++;
		arr_ptr[i][++j] = 0;
		while (*str == c && *str)
			++str;
		*success += 1;
	}
	arr_ptr[i] = 0;
	return (false);
}

void	free_all(char **arr_ptr, size_t successes)
{
	char	**dummy;

	dummy = arr_ptr;
	while (successes--)
	{
		free(*dummy);
		dummy++;
	}
	free(arr_ptr);
}
