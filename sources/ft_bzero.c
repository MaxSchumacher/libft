/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/07 01:14:25 by mschumac          #+#    #+#             */
/*   Updated: 2017/05/07 05:09:05 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *memory_starting_location, size_t number_of_bytes)
{
	char* null_string;

	null_string = memory_starting_location;
	if (number_of_bytes < 1)
		return;
	while (number_of_bytes--) 
		*null_string++ = '\0';
}
