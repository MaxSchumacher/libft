/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 03:55:34 by mschumac          #+#    #+#             */
/*   Updated: 2017/05/19 20:53:24 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	unsigned char	*typed_destination;
	const char		*typed_source;

	typed_destination = (unsigned char *)destination;
	typed_source = (char *)source;
	while (n--)
	{
		if ((*typed_destination++ = *typed_source++) == (unsigned char)c)
			return (typed_destination);
	}
	return (NULL);
}
