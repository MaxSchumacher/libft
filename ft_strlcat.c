/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 21:56:56 by mschumac          #+#    #+#             */
/*   Updated: 2017/05/22 02:24:23 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t src_length;
	size_t dst_length;
	size_t n;

	n = 0;
	src_length = ft_strlen(src);
	dst_length = ft_strlen(dst);
	if (size <= dst_length)
		return (size + src_length);
	while (src[n] != '\0' && ((dst_length + n) < (size - 1)))
	{
		dst[dst_length + n] = src[n];
		n++;
	}
	dst[dst_length + n] = '\0';
	return (dst_length + src_length);
}
