/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:17:38 by pastifier         #+#    #+#             */
/*   Updated: 2023/11/05 02:30:04 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>
# include <limits.h>

/************************************
 * 									*
 *		SECTION 1.a: <ctype.h>      *
 * 									*
 ************************************/
// DONE!

int		ft_isalpha(int c); // done.
int		ft_isdigit(int c); // done.
int		ft_isalnum(int c); // done.
int		ft_isascii(int c); // done.
int		ft_isprint(int c); // done.
char	ft_toupper(int c); // done.
char	ft_tolower(int c); // done.
// DONE!

/************************************
 * 									*
 *		SECTION 1.b: <string.h>     *
 * 									*
 ************************************/
// DONE!

char	*ft_strchr(const char *s, int c); // done.
char	*ft_strrchr(const char *s, int c); // done. //// last occurence
int		ft_strncmp(const char *s1, const char *s2, size_t n); // done
size_t	ft_strlen(const char *str); // done.
size_t	ft_strlcpy(char *dst, const char *src, size_t sz); // done.
size_t	ft_strlcat(char *dst, const char *src, size_t sz); // done (hopefully)
char	*ft_strnstr(const char *haystack, const char *needle, size_t haylen);
// DONE!

/************************************
 * 									*
 *		SECTION 1.c: <stdlib.h>     *
 * 									*
 ************************************/
// DONE !!

void	ft_bzero(void *s, size_t n); // done (hopefully)
void	*ft_memset(void *s, int c, size_t n); // done. (go back to bzero)
void	*ft_memchr(const void *s, int c, size_t n); // done.
void	*ft_memcpy(void *dst, const void *src, size_t n); // done.
void	*ft_memmove(void *dst, const void *src, size_t n); // done (hopefully)
int		ft_memcmp(const void *p1, const void *p2, size_t n); // done.
char	*ft_strdup(const char *str); // done.
void	*ft_calloc(size_t nmemb, size_t n); // done.
int		ft_atoi(const char *str); // done.
// DONE!!

/************************************
 * 									*
 *		SECTION 2: EPIC GUYS        *
 * 									*
 ************************************/
char	*ft_substr(const char *s, unsigned int start, size_t len); // done.
char	*ft_strjoin(const char *s1, const char *s2); // done.
char	*ft_strtrim(const char *s1, const char *set); // done.
char	**ft_split(const char *s, char c); // check...
char	*ft_itoa(int n); // done.
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char)); // done.
void	ft_striteri(char *s, void (*f)(unsigned int, char*)); // done.
void	ft_putchar_fd(char c, int fd); // done.
void	ft_putstr_fd(char *s, int fd); // done.
void	ft_putendl_fd(char *s, int fd); // done.
void	ft_putnbr_fd(int n, int fd); // done.

/************************************
 * 									*
 *		SECTION 3: BONUS			*
 * 									*
 ************************************/
// DONE!
/*
 * Node struct. I don't know why my boss didn't
 * just let me name it "node" or something...
 */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content); // done.
void	ft_lstadd_front(t_list **lst, t_list *new); // done.
int		ft_lstsize(t_list *lst); // done.
t_list	*ft_lstlast(t_list *lst); // done.
void	ft_lstadd_back(t_list **lst, t_list *new); // done.
void	ft_lstdelone(t_list *lst, void (*del)(void *)); // done.
void	ft_lstclear(t_list **lst, void (*del)(void *)); // done.
void	ft_lstiter(t_list *lst, void (*f)(void *)); // done.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)); // done.
// DONE!
#endif // !LIBFT_H
