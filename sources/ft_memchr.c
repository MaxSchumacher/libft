/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 07:55:43 by mschumac          #+#    #+#             */
/*   Updated: 2017/05/16 12:53:17 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *string, int needle, size_t n)
{
	unsigned char *typed_string;

	typed_string = (unsigned char *)string;
	while (n--)
	{
		if (*typed_string++ == (unsigned char)needle)
			return (typed_string - 1);
	}
	return (NULL);
}
