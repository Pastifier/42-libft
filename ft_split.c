/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:45:14 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/06 12:23:21 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	wordcount(const char *str, char c);
static int	wordlen(const char *str, char c);
static bool	allocate_each(char ***self, const char *str, char c, size_t *success);
static void	free_all(char **self, size_t successes); //frees all strings [0, successes].
/* TODO:
 * (REWORK FT_SPLIT).
 */

char	**ft_split(const char *s, char c)
{
	char	**self;
	size_t	successes;
	
	successes = 0;
	return (NULL);
}

void	use_wordcount(const char *str, char delim)
{
	printf("%d\n", wordcount(str, delim));
}

/*
	Counts the amount of segments split by `c` in `str`.
*/
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
	while (str[i] || str[i] != c)
		++i;
	return (i);
}

bool allocate_each(char ***self, const char *str, char c, size_t *success /*initialised outside and modified to know how many str[i]'s to free*/)
{
    size_t  i;
    size_t	j;

    i = -1;
    *self = malloc(sizeof(char *) * wordcount(str, c) + 1);
    while (*self[++i])
	{
		j = -1;
		*self[i] = malloc(sizeof(char) * wordlen(str, c) + 1);
		if (!*self[i])
			return (false);
		while(*str != c)
			*self[i][++j] = *str++;
		*self[i][j] = 0;
		++str;
	}
	*self[i] = 0;
	return (true);
}