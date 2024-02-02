/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 09:22:33 by ebinjama          #+#    #+#             */
/*   Updated: 2024/02/01 11:09:33 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char	*read_till_done(int fd, char *trail);
static char	*read_to_buff(int fd, char *self, char *trail, ssize_t *fetch);
static char	*extract_line(char **from, char *trail);

char	*get_next_line(int fd)
{
	static char	trail[1024][BUFFER_SIZE + 1U];
	char		*line;
	char		*hold;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	trail[fd][BUFFER_SIZE] = 0;
	hold = read_till_done(fd, trail[fd]);
	if (!hold)
		return (hold);
	line = extract_line(&hold, trail[fd]);
	free(hold);
	return (line);
}

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	if (!dst || !src)
		return (NULL);
	while (*src && n--)
		*dst++ = *src++;
	if (n)
		while (n--)
			*dst++ = 0;
	*dst = 0;
	return (dst);
}

char	*read_to_buff(int fd, char *self, char *trail, ssize_t *fetch)
{
	char	*temp;

	if (BUFFER_SIZE <= 0)
		return (NULL);
	while (*fetch > 0 && !ft_strchr(self, '\n'))
	{
		*fetch = read(fd, trail, BUFFER_SIZE);
		if (*fetch == 0)
			return (self);
		if (*fetch < 0)
		{
			ft_memset(trail, 0, BUFFER_SIZE);
			return (free(self), NULL);
		}
		trail[*fetch] = 0;
		temp = self;
		self = ft_strjoin(self, trail);
		free(temp);
	}
	return (self);
}

char	*read_till_done(int fd, char *trail)
{
	char	*self;
	ssize_t	fetch;

	self = NULL;
	if (*trail)
		self = ft_strdup(trail);
	fetch = 1;
	self = read_to_buff(fd, self, trail, &fetch);
	return (self);
}

// TODO:
// decide how you want to deal with extracting the line
// (the trick you have in mind is using nl_address as a "bool").
//
// burn Norminette.
char	*extract_line(char **from, char *trails)
{
	char	*into;
	char	*nl_address;
	size_t	len;

	nl_address = ft_strchr(*from, '\n');
	if (nl_address)
		len = (size_t)(nl_address - *from + 1);
	else
		len = ft_strlen(*from);
	into = malloc(sizeof(char) * (len + 1));
	if (!into)
		return (NULL);
	into[len] = 0;
	while (len--)
		into[len] = (*from)[len];
	if (nl_address && *(nl_address + 1))
		ft_strncpy(trails, nl_address + 1, BUFFER_SIZE);
	else
		ft_memset(trails, 0, BUFFER_SIZE);
	return (into);
}
