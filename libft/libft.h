/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsirirak <mavin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 21:12:02 by tsirirak          #+#    #+#             */
/*   Updated: 2023/02/08 22:56:50 by tsirirak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
size_t	ft_strlen(char *s);
void	*ft_memset(void *d, int c, size_t len);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(  char *s, int c);
char	*ft_strrchr(  char *s, int c);
int		ft_atoi(  char *str);
int		ft_strlcpy(char *dst,   char *src, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst,   void *src, size_t n);
void	*ft_memmove(void *dst,   void *src, size_t len);
void	*ft_memchr(  void *s, int c, size_t n);
int		ft_strlcat(char *dst,   char *src, size_t dstsize);
int		ft_memcmp(  void *s1,   void *s2, size_t n);
int		ft_strncmp(  char *s1,   char *s2, size_t n);
char	*ft_strnstr(  char *haystack,   char *needle, size_t len);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(  char *s1);
char	*ft_substr(char   *s, unsigned int start, size_t len);
char	*ft_strjoin(char   *s1, char   *s2);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_itoa(int n);
char	*ft_strtrim(char   *s1, char   *set);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strmapi(char   *s, char (*f)(unsigned int, char));
char	**ft_split(char   *s, char c);
#endif
