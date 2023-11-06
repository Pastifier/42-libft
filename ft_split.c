/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:45:14 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/06 15:23:11 by ebinjama         ###   ########.fr       */
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

// Takes care of all the allocations. Returns `true` if something went wrong; false otherwise.
// `true` was chosen for failure to make ft_split more readable.
// @param self_ptr: The address of the string array. Passed like so, to handle it from outside the scope.
// @param str: The string to split.
// @param success: The address of the variable storing the number of successful string allocations.
static bool	allocate_each(char ***self_ptr, const char *str, char c, size_t *success);

// Frees everything. Called upon failure (`allocate_each(...) == true`).
// @param self_ptr: The address of the string array. Passed like so, to handle it from outside the scope.
// @param successes: The number of successful allocations, i.e. the number of times to call `free`.
static void	free_all(char ***self_ptr, size_t successes);

char	**ft_split(const char *s, char c)
{
	char	**self;
	size_t	successes;
	bool	abort;
	
	successes = 0;
	abort = allocate_each(&self, s, c, &successes);
	if (abort)
	{
		free_all(&self, successes);
		return (NULL);
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
		if (*str != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (count);
}

int wordlen(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		++i;
	return (i);
}

bool allocate_each(char ***self_ptr, const char *str, char c, size_t *success)
{
    int  i;
    int	j;

    i = -1;
    *self_ptr = calloc(wordcount(str, c) + 1, sizeof(char *));  
	if (!*self_ptr)
		return (true);
    while (*self_ptr[++i])
	{
		j = -1;
		(*self_ptr)[i] = calloc(wordlen(str, c) + 1, sizeof(char));
		if (!(*self_ptr)[i])
			return (true);
		while(*str && *str != c)
			(*self_ptr)[i][++j] = *str++;
		(*self_ptr)[i][j] = 0;
		++str;
		*success += 1;
	}
	*self_ptr[i] = 0;
	return (false);
}

void	free_all(char ***self_ptr, size_t successes)
{
	char	***dummy;

	dummy = self_ptr;
	while (successes--)
	{
		free(**dummy);
		(*dummy)++;
	}
	free(*self_ptr);
}

#include <stdio.h>
int main(void)
{
	const char *src = "Hello, World!,epic,boi";
	char **strs = ft_split(src, ',');

	int i = -1;
	while (strs[++i])
		printf("%d : %s\n", i, strs[i]);
}