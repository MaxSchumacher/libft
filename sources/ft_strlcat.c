/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 21:56:56 by mschumac          #+#    #+#             */
/*   Updated: 2017/05/20 18:13:22 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t src_length;
	size_t dst_length;
	size_t n;
	char *d;

	n = size;
	d = dst;
	while (n-- && *d != '\0')
		d++;

	src_length = ft_strlen(src);
	dst_length = d - dst;
	if (size == 0)
		return (size);
	if (src_length + dst_length + 1 > size)
	{
		ft_strncpy(dst + dst_length, src, size - 1 - dst_length);
		dst[size] = '\0'; 
		return (size);
	}
	else
	{
		ft_strcpy(dst + dst_length, src);
		dst[dst_length + src_length] = '\0';
		return (src_length + dst_length);
	}
}
/*
- concatenates strings
- if there is one free byte in dst, the string gets terminated
- only operate on true C strings => both src and dst must be null terminated (strlen is nonzero)
- appends src to the end of dst (dst + ft_strlen(dst))
- no more than size - strlen(dst) - 1 chars will be appended. Null terminate the result.
*/
