/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:17:38 by pastifier         #+#    #+#             */
/*   Updated: 2023/11/05 23:38:43 by ebinjama         ###   ########.fr       */
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

/*
* Returns `1` if `c` is an alphabet, and `0` otherwise.
* 
* The function casts `c` to a `char` while performing the check,
* so using anything but ASCII values is pretty much useless. 
*/
int		ft_isalpha(int c);

/*
* Returns `1` if `c` is a digit, and `0` otherwise.
* 
* The function casts `c` to a `char` while performing the check,
* so using anything but ASCII values is pretty much useless. 
*/
int		ft_isdigit(int c);

/*
* Returns `1` if `c` is alphanumeric, and `0` otherwise.
* 
* The function casts `c` to a `char` while performing the check,
* so using anything but ASCII values is pretty much useless. 
*/
int		ft_isalnum(int c);

/*
* Returns `1` if `c` is within ASCII range, and `0` otherwise.
* 
* This is a legacy function, and is pretty much useless if you're not
* strictly operating on integers.

* (Although you could probably do some cool maths stuff with it).
*/
int		ft_isascii(int c);

/*
* Returns `1` if `c` represents a printable character
* according to the ASCII table, and `0` otherwise. 
*/
int		ft_isprint(int c);

/*
	Returns the uppercase variant of a lowercase character.
	If the character is not alphabetic, the same character
	is returned.

	(This function casts `c` to a `char` in its implementation,
	so using non-ASCII values is pretty-much useless).
*/
char	ft_toupper(int c);

/*
	Returns the lowercase variant of an uppercase character.
	If the character is not alphabetic, the same character
	is returned.

	(This function casts `c` to a `char` in its implementation,
	so using non-ASCII values is pretty-much useless).
*/
char	ft_tolower(int c);

/************************************
 * 									*
 *		SECTION 1.b: <string.h>     *
 * 									*
 ************************************/

/*
	Searches the string `s` for the first occurence of
 	the character `c`.

  	(`s` must be a true, null-terminated, C string).
   	(`c` is typecasted to `char`, so using non-ASCII values
    is pretty-much useless).
*/
char	*ft_strchr(const char *s, int c);

/*
	Works exactly like `ft_strchr`, but locates the last
 	occurence of `c` (as opposed to its first occurence).
*/
char	*ft_strrchr(const char *s, int c);

/*
	Compares `n` bytes of `s1` and `s2` and returns the
 	difference of the first non-equal value
  	(difference of the first difference hehe).

   	This function is NOT safe, and you should use it only when
    you're sure of the size. Not using true C strings will
    cause undefined behaviour!!
*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/*
	Returns the amount of characters in the
 	true C string `str` (null-terminated).

  	(NULL on invalid `str` input).
	(Not using a true C string will cause undefined behaviour).
 */
size_t	ft_strlen(const char *str);

/*
	Copies the input string into a destination string.
 	If the destination buffer, limited by its size, isn't
  	large enough to hold the copy, the resulting string is truncated
   	(but it is guaranteed to be null-terminated).
    It returns the length of the total string they tried to create.

    (The programmer is responsible for inputting an accurate size).
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t sz);

/*
	Catenates the input string into a destination string.
 	If the destination buffer, limited by its size, isn't
  	large enough to hold the copy, the resulting string is truncated
   	(but it is guaranteed to be null-terminated).
    It returns the length of the total string they tried to create.

    (The programmer is responsible for inputting an accurate size).
*/
size_t	ft_strlcat(char *dst, const char *src, size_t sz);

/*
	Searches `haystack` for the first occurence of `needle`, and
 	returns a pointer to that address, or NULL if `needle`
  	doesn't exist in `haystack`. If `needle` is empty,
   	a pointer to `haystack` is returned.
 	
  	This function uses ft_strncmp for its implementation, so
  	make sure the inputs are true C strings (see ft_strncmp).
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t haylen);

/************************************
 * 									*
 *		SECTION 1.c: <stdlib.h>     *
 * 									*
 ************************************/

void	ft_bzero(void *s, size_t n); // done (hopefully)
void	*ft_memset(void *s, int c, size_t n); // done. (go back to bzero)
void	*ft_memchr(const void *s, int c, size_t n); // done.
void	*ft_memcpy(void *dst, const void *src, size_t n); // done.
void	*ft_memmove(void *dst, const void *src, size_t n); // done (hopefully)
int		ft_memcmp(const void *p1, const void *p2, size_t n); // done.
char	*ft_strdup(const char *str); // done.
void	*ft_calloc(size_t nmemb, size_t n); // done.

/*
 * Takes a true C string (null-terminated) and converts it to its
 * integer representation.
 * Whitespace at the start will be ignored, and non-digit characters will stop
 * execution if present anywhere within the string.
 * 
 * (If the resulting int representation is not within 
 * INT_MIN to INT_MAX, it's undefined behaviour).
 * 
 * 
 * EXAMPLE OF INVALID INPUT:
 * "   sdf -+29skj"
 * 
 * EXAMPLE OF VALID INPUT:
 * "       -20001"
 */
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
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
// DONE!
#endif // !LIBFT_H
