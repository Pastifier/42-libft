/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 09:22:33 by ebinjama          #+#    #+#             */
/*   Updated: 2024/02/01 08:36:14 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_gnl	read_till_done(int fd, char *trail);
static char		*read_to_buff(int fd, char *self, char *trail, ssize_t *fetch);
static char		*extract_line(char **from, char *trail);

t_gnl	get_next_line(int fd)
{
	static char	trail[1024][BUFFER_SIZE + 1U];
	t_gnl		line;
	t_gnl		hold;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (hold.str = NULL, hold.error = true, hold);
	trail[fd][BUFFER_SIZE] = 0;
	hold = read_till_done(fd, trail[fd]);
	if (!hold.str || hold.error)
		return (hold);
	line.error = false;
	line.str = extract_line(&hold.str, trail[fd]);
	free(hold.str);
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
		if (*fetch == 0 && self && *self)
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

t_gnl	read_till_done(int fd, char *trail)
{
	t_gnl	self;
	ssize_t	fetch;

	self.str = NULL;
	if (*trail)
		self.str = ft_strdup(trail);
	fetch = 1;
	self.str = read_to_buff(fd, self.str, trail, &fetch);
	if (fetch < 0)
		self.error = true;
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
