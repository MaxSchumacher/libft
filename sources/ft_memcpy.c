/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 03:08:25 by mschumac          #+#    #+#             */
/*   Updated: 2017/05/08 04:19:52 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *destination;
	const char *source;

	destination = (char *)dst;
	source = (char *)src;
	while(n--)
		*destination++ = *source++;
	return (dst);
}
