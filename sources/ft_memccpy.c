/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 03:55:34 by mschumac          #+#    #+#             */
/*   Updated: 2017/05/15 12:15:17 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/* ft_memccpy copies bytes from string source to string destination. If the 
 * character c (as converted to an unsigned char) occurs in the string src, the copy
 * stops and a pointer to the byte after the copy of c in destination is 
 * returned.  Otherwise, n bytes are copied, and a NULL pointer is returned.
 *
 * Source and destination should not overlap, as the behavior is undefined.
 */

void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	register unsigned char* typed_destination;
	register const	char* typed_source;

	typed_destination	= (unsigned char *)destination;
	typed_source		= (char *)source;
	while (n--)
	{
		if ((*typed_destination++ = *typed_source++) == (unsigned char)c)
			return (typed_destination);
	}
	return (NULL);
}

