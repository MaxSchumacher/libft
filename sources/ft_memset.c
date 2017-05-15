/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 20:28:55 by mschumac          #+#    #+#             */
/*   Updated: 2017/05/06 04:43:45 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *destination, int c, size_t byte_counter)
{
	unsigned char *initial_destination;

	initial_destination = destination;
	while (byte_counter--)
		*initial_destination++ = (unsigned char)c;
	return (destination);
}
